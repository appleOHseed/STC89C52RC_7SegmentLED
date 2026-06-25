/*   Decimal UP Counter with Four 7-Segment Display Multiplexing
 UPC47Seg.c         multiplexed Seven Segment Displays.
     MCU:  stc89c58rd+, 11.0592 MHz external clock, 
     The common anodes of four seven segment dispalys are
     connected to P1.0, P1.1, P1.2 and P1.3, whereas the seven
     segments are driven through PORT 0 pins    */

#include <mcs51/8051.h>
#include <mcs51/compiler.h> // NOP
#include <stdint.h>
#include <stdio.h>
// #include <mcs51/serial.h>

unsigned short num;
unsigned short i, DD0, DD1, DD2, DD3;
unsigned int Count;

#define LED_DIGIT P1
#define LED_Segment P0
#define BuzzEr P1_4 	//  Buzzer

__sbit __at(0xB4) P34; // P3.4
__sbit __at(0xB5) P35; // P3.5
__sbit __at(0xB6) P36; // P3.6		(Relay)
__sbit __at(0xB7) P37; // P3.7

void Buzz24(void);
void Delay2400(void);
void STC89C52RC(void);

unsigned short check_value(unsigned short num) {
    if (num == 0) return 0xC0;
    if (num == 1) return 0xF9;
    if (num == 2) return 0xA4;
    if (num == 3) return 0xB0;
    if (num == 4) return 0x99;
    if (num == 5) return 0x92;
    if (num == 6) return 0x82;
    if (num == 7) return 0xF8;
    if (num == 8) return 0x80;
    if (num == 9) return 0x90;
return 0x00; // Ensures a value is returned if x <= 0
}

int putchar(int c)
{
	while(!(SCON & 0x02));
	SCON &= ~0x02;	SBUF = c;
	return (c);
}

//------ Function to Return mask for common anode 7-seg. display
//void 
//mask(unsigned short num) {
//void unsigned short mask(unsigned short num) {
 /* switch (num) {
 case 0 : return 0xC0;          // 0    0b11000000
 case 1 : return 0xF9;  // 1    0b11111001
 case 2 : return 0xA4;
 case 3 : return 0xB0;
 case 4 : return 0x99;
 case 5 : return 0x92;
 case 6 : return 0x82;
 case 7 : return 0xF8;
 case 8 : return 0x80;
 case 9 : return 0x90;
 } //case end
}    */

void Buzz24(void)
{
for(uint8_t i=0; i<50; i++) {
BuzzEr = 1;   Delay2400();   BuzzEr = 0;   Delay2400();
}
}

void Delay2400(void)
{
    __asm
        push 0x30
        push 0x31
        mov 0x30,#4
        mov 0x31,#220
NEXT:
        djnz 0x31,NEXT
        djnz 0x30,NEXT
        pop 0x31
        pop 0x30
    __endasm;
}

void STC89C52RC(void)
{
putchar(2);          putchar(32);        putchar(32);	
putchar(((Count/1000)+48));        putchar((((Count/100)%10)+48));
putchar((((Count/10)%10)+48));        putchar(((Count%10)+48));
putchar(32);        putchar(107);       putchar(103);        
putchar(13);	putchar(10);
}

void main(void) {
	TMOD = 0x20;	// Configure UART for 9600 baud, 8 data bits, 1 stop bit. @11.0592 MHz crystal
	SCON = 0x40;
	TH1 = 256 - 11.0592 * 1000 * 1000 / 12 / 32 / 9600 + 0.5;
	TCON |= 0x40;
	SCON |= 0x02;
  P0 = 0x00; // Initialize port, Set PORT 0 direction to be output
  P1 = 0x00; // Initialize port, Set PORT 1 direction to be output
 P36 = 0;		// Initialize port P3.6 (Relay)
 BuzzEr = 0;	// Initialize port P1.4 Buzzer
 P34 = 1;		// Initialize port P3.4   SW P3.4  switch(Active LOW)
 P35 = 1;		// Initialize port P3.5   SW P3.5  switch(Active LOW)
printf("STC89C52RC\n");
printf("Decimal UP Counter with Four 7-Segment Display Multiplexing\n");
printf("11.0592 MHz crystal, 9600 Baud\n");
STC89C52RC();
Buzz24();

  LED_Segment = 0x00; // Turn off all segments / Turn OFF LEDs on PORT 0
      Count   =    0;  // Initial Value of Counter

  do {
 if(P35==0)
    {    BuzzEr = 0; 	  // BuzzeR ON
printf("BuzzeR ON\n");    }	
    else
    {    BuzzEr = 1;	  // BuzzeR OFF
printf("BuzzeR OFF\n");    }	

// if(P34==0)
  //  {    P36=0; // reLay ON	printf("reLay ON\n");    }
    //else
    //{    P36=1;// reLay OFF	printf("reLay OFF\n");    }

  DD0 = Count%10;  // Extract Ones Digit	  // DD0 = mask(DD0);
  DD0 = check_value(DD0);
  DD1 = (Count/10)%10; // Extract Tens Digit
  DD1 = check_value(DD1);
  DD2 = (Count/100)%10; // Extract Hundreds Digit
  DD2 = check_value(DD2);
  DD3 = (Count/1000);  // Extract Thousands Digit
  DD3 = check_value(DD3);

  for (i = 0; i<=50; i++) {
      LED_Segment = DD3;		// DD0;
      P1 = 0xFE; 	//  port P1.0 = 0, Select Ones Digit
      // P1.3_bit = 1;  P1.2_bit = 1;  P1.1_bit = 1;  P1.0_bit = 0; 
      Delay2400();
      LED_Segment = DD2;		//  DD1;
      P1 = 0xFD;     //  port P1.1 = 0, Select Tens Digit
  //    P1.3_bit = 1;  P1.2_bit = 1;  P1.1_bit = 0; P1.0_bit = 1;
      Delay2400();
      LED_Segment = DD1;		//  DD2;
      P1 = 0xFB; 		//  port P1.2 = 0, Select Hundreds Digit
 //     P1.3_bit = 1;     P1.2_bit = 0;         P1.1_bit = 1;      P1.0_bit = 1;
      Delay2400();
      LED_Segment   = DD0;		// DD3;
      P1 = 0xF7; 		//  port P1.3 = 0, Select Thousands Digit
 //     P1.3_bit = 0;          P1.2_bit = 1;     P1.1_bit = 1;      P1.0_bit = 1;
      Delay2400();
      }
      Count = Count + 1 ;
      if (Count > 9999) Count = 0;
	STC89C52RC();
  } while(1);          // endless loop
}