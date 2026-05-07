                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ISO C Compiler
                                      3 ; Version 4.5.0 #15242 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module UPC47Seg
                                      6 	
                                      7 	.optsdcc -mmcs51 --model-small
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _main
                                     12 	.globl _check_value
                                     13 	.globl _printf
                                     14 	.globl _P37
                                     15 	.globl _P36
                                     16 	.globl _P35
                                     17 	.globl _P34
                                     18 	.globl _CY
                                     19 	.globl _AC
                                     20 	.globl _F0
                                     21 	.globl _RS1
                                     22 	.globl _RS0
                                     23 	.globl _OV
                                     24 	.globl _F1
                                     25 	.globl _P
                                     26 	.globl _PS
                                     27 	.globl _PT1
                                     28 	.globl _PX1
                                     29 	.globl _PT0
                                     30 	.globl _PX0
                                     31 	.globl _RD
                                     32 	.globl _WR
                                     33 	.globl _T1
                                     34 	.globl _T0
                                     35 	.globl _INT1
                                     36 	.globl _INT0
                                     37 	.globl _TXD
                                     38 	.globl _RXD
                                     39 	.globl _P3_7
                                     40 	.globl _P3_6
                                     41 	.globl _P3_5
                                     42 	.globl _P3_4
                                     43 	.globl _P3_3
                                     44 	.globl _P3_2
                                     45 	.globl _P3_1
                                     46 	.globl _P3_0
                                     47 	.globl _EA
                                     48 	.globl _ES
                                     49 	.globl _ET1
                                     50 	.globl _EX1
                                     51 	.globl _ET0
                                     52 	.globl _EX0
                                     53 	.globl _P2_7
                                     54 	.globl _P2_6
                                     55 	.globl _P2_5
                                     56 	.globl _P2_4
                                     57 	.globl _P2_3
                                     58 	.globl _P2_2
                                     59 	.globl _P2_1
                                     60 	.globl _P2_0
                                     61 	.globl _SM0
                                     62 	.globl _SM1
                                     63 	.globl _SM2
                                     64 	.globl _REN
                                     65 	.globl _TB8
                                     66 	.globl _RB8
                                     67 	.globl _TI
                                     68 	.globl _RI
                                     69 	.globl _P1_7
                                     70 	.globl _P1_6
                                     71 	.globl _P1_5
                                     72 	.globl _P1_4
                                     73 	.globl _P1_3
                                     74 	.globl _P1_2
                                     75 	.globl _P1_1
                                     76 	.globl _P1_0
                                     77 	.globl _TF1
                                     78 	.globl _TR1
                                     79 	.globl _TF0
                                     80 	.globl _TR0
                                     81 	.globl _IE1
                                     82 	.globl _IT1
                                     83 	.globl _IE0
                                     84 	.globl _IT0
                                     85 	.globl _P0_7
                                     86 	.globl _P0_6
                                     87 	.globl _P0_5
                                     88 	.globl _P0_4
                                     89 	.globl _P0_3
                                     90 	.globl _P0_2
                                     91 	.globl _P0_1
                                     92 	.globl _P0_0
                                     93 	.globl _B
                                     94 	.globl _ACC
                                     95 	.globl _PSW
                                     96 	.globl _IP
                                     97 	.globl _P3
                                     98 	.globl _IE
                                     99 	.globl _P2
                                    100 	.globl _SBUF
                                    101 	.globl _SCON
                                    102 	.globl _P1
                                    103 	.globl _TH1
                                    104 	.globl _TH0
                                    105 	.globl _TL1
                                    106 	.globl _TL0
                                    107 	.globl _TMOD
                                    108 	.globl _TCON
                                    109 	.globl _PCON
                                    110 	.globl _DPH
                                    111 	.globl _DPL
                                    112 	.globl _SP
                                    113 	.globl _P0
                                    114 	.globl _Count
                                    115 	.globl _DD3
                                    116 	.globl _DD2
                                    117 	.globl _DD1
                                    118 	.globl _DD0
                                    119 	.globl _i
                                    120 	.globl _num
                                    121 	.globl _putchar
                                    122 	.globl _Buzz24
                                    123 	.globl _Delay2400
                                    124 	.globl _STC89C52RC
                                    125 ;--------------------------------------------------------
                                    126 ; special function registers
                                    127 ;--------------------------------------------------------
                                    128 	.area RSEG    (ABS,DATA)
      000000                        129 	.org 0x0000
                           000080   130 _P0	=	0x0080
                           000081   131 _SP	=	0x0081
                           000082   132 _DPL	=	0x0082
                           000083   133 _DPH	=	0x0083
                           000087   134 _PCON	=	0x0087
                           000088   135 _TCON	=	0x0088
                           000089   136 _TMOD	=	0x0089
                           00008A   137 _TL0	=	0x008a
                           00008B   138 _TL1	=	0x008b
                           00008C   139 _TH0	=	0x008c
                           00008D   140 _TH1	=	0x008d
                           000090   141 _P1	=	0x0090
                           000098   142 _SCON	=	0x0098
                           000099   143 _SBUF	=	0x0099
                           0000A0   144 _P2	=	0x00a0
                           0000A8   145 _IE	=	0x00a8
                           0000B0   146 _P3	=	0x00b0
                           0000B8   147 _IP	=	0x00b8
                           0000D0   148 _PSW	=	0x00d0
                           0000E0   149 _ACC	=	0x00e0
                           0000F0   150 _B	=	0x00f0
                                    151 ;--------------------------------------------------------
                                    152 ; special function bits
                                    153 ;--------------------------------------------------------
                                    154 	.area RSEG    (ABS,DATA)
      000000                        155 	.org 0x0000
                           000080   156 _P0_0	=	0x0080
                           000081   157 _P0_1	=	0x0081
                           000082   158 _P0_2	=	0x0082
                           000083   159 _P0_3	=	0x0083
                           000084   160 _P0_4	=	0x0084
                           000085   161 _P0_5	=	0x0085
                           000086   162 _P0_6	=	0x0086
                           000087   163 _P0_7	=	0x0087
                           000088   164 _IT0	=	0x0088
                           000089   165 _IE0	=	0x0089
                           00008A   166 _IT1	=	0x008a
                           00008B   167 _IE1	=	0x008b
                           00008C   168 _TR0	=	0x008c
                           00008D   169 _TF0	=	0x008d
                           00008E   170 _TR1	=	0x008e
                           00008F   171 _TF1	=	0x008f
                           000090   172 _P1_0	=	0x0090
                           000091   173 _P1_1	=	0x0091
                           000092   174 _P1_2	=	0x0092
                           000093   175 _P1_3	=	0x0093
                           000094   176 _P1_4	=	0x0094
                           000095   177 _P1_5	=	0x0095
                           000096   178 _P1_6	=	0x0096
                           000097   179 _P1_7	=	0x0097
                           000098   180 _RI	=	0x0098
                           000099   181 _TI	=	0x0099
                           00009A   182 _RB8	=	0x009a
                           00009B   183 _TB8	=	0x009b
                           00009C   184 _REN	=	0x009c
                           00009D   185 _SM2	=	0x009d
                           00009E   186 _SM1	=	0x009e
                           00009F   187 _SM0	=	0x009f
                           0000A0   188 _P2_0	=	0x00a0
                           0000A1   189 _P2_1	=	0x00a1
                           0000A2   190 _P2_2	=	0x00a2
                           0000A3   191 _P2_3	=	0x00a3
                           0000A4   192 _P2_4	=	0x00a4
                           0000A5   193 _P2_5	=	0x00a5
                           0000A6   194 _P2_6	=	0x00a6
                           0000A7   195 _P2_7	=	0x00a7
                           0000A8   196 _EX0	=	0x00a8
                           0000A9   197 _ET0	=	0x00a9
                           0000AA   198 _EX1	=	0x00aa
                           0000AB   199 _ET1	=	0x00ab
                           0000AC   200 _ES	=	0x00ac
                           0000AF   201 _EA	=	0x00af
                           0000B0   202 _P3_0	=	0x00b0
                           0000B1   203 _P3_1	=	0x00b1
                           0000B2   204 _P3_2	=	0x00b2
                           0000B3   205 _P3_3	=	0x00b3
                           0000B4   206 _P3_4	=	0x00b4
                           0000B5   207 _P3_5	=	0x00b5
                           0000B6   208 _P3_6	=	0x00b6
                           0000B7   209 _P3_7	=	0x00b7
                           0000B0   210 _RXD	=	0x00b0
                           0000B1   211 _TXD	=	0x00b1
                           0000B2   212 _INT0	=	0x00b2
                           0000B3   213 _INT1	=	0x00b3
                           0000B4   214 _T0	=	0x00b4
                           0000B5   215 _T1	=	0x00b5
                           0000B6   216 _WR	=	0x00b6
                           0000B7   217 _RD	=	0x00b7
                           0000B8   218 _PX0	=	0x00b8
                           0000B9   219 _PT0	=	0x00b9
                           0000BA   220 _PX1	=	0x00ba
                           0000BB   221 _PT1	=	0x00bb
                           0000BC   222 _PS	=	0x00bc
                           0000D0   223 _P	=	0x00d0
                           0000D1   224 _F1	=	0x00d1
                           0000D2   225 _OV	=	0x00d2
                           0000D3   226 _RS0	=	0x00d3
                           0000D4   227 _RS1	=	0x00d4
                           0000D5   228 _F0	=	0x00d5
                           0000D6   229 _AC	=	0x00d6
                           0000D7   230 _CY	=	0x00d7
                           0000B4   231 _P34	=	0x00b4
                           0000B5   232 _P35	=	0x00b5
                           0000B6   233 _P36	=	0x00b6
                           0000B7   234 _P37	=	0x00b7
                                    235 ;--------------------------------------------------------
                                    236 ; overlayable register banks
                                    237 ;--------------------------------------------------------
                                    238 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        239 	.ds 8
                                    240 ;--------------------------------------------------------
                                    241 ; internal ram data
                                    242 ;--------------------------------------------------------
                                    243 	.area DSEG    (DATA)
      000008                        244 _num::
      000008                        245 	.ds 2
      00000A                        246 _i::
      00000A                        247 	.ds 2
      00000C                        248 _DD0::
      00000C                        249 	.ds 2
      00000E                        250 _DD1::
      00000E                        251 	.ds 2
      000010                        252 _DD2::
      000010                        253 	.ds 2
      000012                        254 _DD3::
      000012                        255 	.ds 2
      000014                        256 _Count::
      000014                        257 	.ds 2
                                    258 ;--------------------------------------------------------
                                    259 ; overlayable items in internal ram
                                    260 ;--------------------------------------------------------
                                    261 	.area	OSEG    (OVR,DATA)
                                    262 	.area	OSEG    (OVR,DATA)
                                    263 ;--------------------------------------------------------
                                    264 ; Stack segment in internal ram
                                    265 ;--------------------------------------------------------
                                    266 	.area SSEG
      00004C                        267 __start__stack:
      00004C                        268 	.ds	1
                                    269 
                                    270 ;--------------------------------------------------------
                                    271 ; indirectly addressable internal ram data
                                    272 ;--------------------------------------------------------
                                    273 	.area ISEG    (DATA)
                                    274 ;--------------------------------------------------------
                                    275 ; absolute internal ram data
                                    276 ;--------------------------------------------------------
                                    277 	.area IABS    (ABS,DATA)
                                    278 	.area IABS    (ABS,DATA)
                                    279 ;--------------------------------------------------------
                                    280 ; bit data
                                    281 ;--------------------------------------------------------
                                    282 	.area BSEG    (BIT)
                                    283 ;--------------------------------------------------------
                                    284 ; paged external ram data
                                    285 ;--------------------------------------------------------
                                    286 	.area PSEG    (PAG,XDATA)
                                    287 ;--------------------------------------------------------
                                    288 ; uninitialized external ram data
                                    289 ;--------------------------------------------------------
                                    290 	.area XSEG    (XDATA)
                                    291 ;--------------------------------------------------------
                                    292 ; absolute external ram data
                                    293 ;--------------------------------------------------------
                                    294 	.area XABS    (ABS,XDATA)
                                    295 ;--------------------------------------------------------
                                    296 ; initialized external ram data
                                    297 ;--------------------------------------------------------
                                    298 	.area XISEG   (XDATA)
                                    299 	.area HOME    (CODE)
                                    300 	.area GSINIT0 (CODE)
                                    301 	.area GSINIT1 (CODE)
                                    302 	.area GSINIT2 (CODE)
                                    303 	.area GSINIT3 (CODE)
                                    304 	.area GSINIT4 (CODE)
                                    305 	.area GSINIT5 (CODE)
                                    306 	.area GSINIT  (CODE)
                                    307 	.area GSFINAL (CODE)
                                    308 	.area CSEG    (CODE)
                                    309 ;--------------------------------------------------------
                                    310 ; interrupt vector
                                    311 ;--------------------------------------------------------
                                    312 	.area HOME    (CODE)
      000000                        313 __interrupt_vect:
      000000 02 00 4C         [24]  314 	ljmp	__sdcc_gsinit_startup
                                    315 ; restartable atomic support routines
      000003                        316 	.ds	5
      000008                        317 sdcc_atomic_exchange_rollback_start::
      000008 00               [12]  318 	nop
      000009 00               [12]  319 	nop
      00000A                        320 sdcc_atomic_exchange_pdata_impl:
      00000A E2               [24]  321 	movx	a, @r0
      00000B FB               [12]  322 	mov	r3, a
      00000C EA               [12]  323 	mov	a, r2
      00000D F2               [24]  324 	movx	@r0, a
      00000E 80 2C            [24]  325 	sjmp	sdcc_atomic_exchange_exit
      000010 00               [12]  326 	nop
      000011 00               [12]  327 	nop
      000012                        328 sdcc_atomic_exchange_xdata_impl:
      000012 E0               [24]  329 	movx	a, @dptr
      000013 FB               [12]  330 	mov	r3, a
      000014 EA               [12]  331 	mov	a, r2
      000015 F0               [24]  332 	movx	@dptr, a
      000016 80 24            [24]  333 	sjmp	sdcc_atomic_exchange_exit
      000018                        334 sdcc_atomic_compare_exchange_idata_impl:
      000018 E6               [12]  335 	mov	a, @r0
      000019 B5 02 02         [24]  336 	cjne	a, ar2, .+#5
      00001C EB               [12]  337 	mov	a, r3
      00001D F6               [12]  338 	mov	@r0, a
      00001E 22               [24]  339 	ret
      00001F 00               [12]  340 	nop
      000020                        341 sdcc_atomic_compare_exchange_pdata_impl:
      000020 E2               [24]  342 	movx	a, @r0
      000021 B5 02 02         [24]  343 	cjne	a, ar2, .+#5
      000024 EB               [12]  344 	mov	a, r3
      000025 F2               [24]  345 	movx	@r0, a
      000026 22               [24]  346 	ret
      000027 00               [12]  347 	nop
      000028                        348 sdcc_atomic_compare_exchange_xdata_impl:
      000028 E0               [24]  349 	movx	a, @dptr
      000029 B5 02 02         [24]  350 	cjne	a, ar2, .+#5
      00002C EB               [12]  351 	mov	a, r3
      00002D F0               [24]  352 	movx	@dptr, a
      00002E 22               [24]  353 	ret
      00002F                        354 sdcc_atomic_exchange_rollback_end::
                                    355 
      00002F                        356 sdcc_atomic_exchange_gptr_impl::
      00002F 30 F6 E0         [24]  357 	jnb	b.6, sdcc_atomic_exchange_xdata_impl
      000032 A8 82            [24]  358 	mov	r0, dpl
      000034 20 F5 D3         [24]  359 	jb	b.5, sdcc_atomic_exchange_pdata_impl
      000037                        360 sdcc_atomic_exchange_idata_impl:
      000037 EA               [12]  361 	mov	a, r2
      000038 C6               [12]  362 	xch	a, @r0
      000039 F5 82            [12]  363 	mov	dpl, a
      00003B 22               [24]  364 	ret
      00003C                        365 sdcc_atomic_exchange_exit:
      00003C 8B 82            [24]  366 	mov	dpl, r3
      00003E 22               [24]  367 	ret
      00003F                        368 sdcc_atomic_compare_exchange_gptr_impl::
      00003F 30 F6 E6         [24]  369 	jnb	b.6, sdcc_atomic_compare_exchange_xdata_impl
      000042 A8 82            [24]  370 	mov	r0, dpl
      000044 20 F5 D9         [24]  371 	jb	b.5, sdcc_atomic_compare_exchange_pdata_impl
      000047 80 CF            [24]  372 	sjmp	sdcc_atomic_compare_exchange_idata_impl
                                    373 ;--------------------------------------------------------
                                    374 ; global & static initialisations
                                    375 ;--------------------------------------------------------
                                    376 	.area HOME    (CODE)
                                    377 	.area GSINIT  (CODE)
                                    378 	.area GSFINAL (CODE)
                                    379 	.area GSINIT  (CODE)
                                    380 	.globl __sdcc_gsinit_startup
                                    381 	.globl __sdcc_program_startup
                                    382 	.globl __start__stack
                                    383 	.globl __mcs51_genXINIT
                                    384 	.globl __mcs51_genXRAMCLEAR
                                    385 	.globl __mcs51_genRAMCLEAR
                                    386 	.area GSFINAL (CODE)
      0000A5 02 00 49         [24]  387 	ljmp	__sdcc_program_startup
                                    388 ;--------------------------------------------------------
                                    389 ; Home
                                    390 ;--------------------------------------------------------
                                    391 	.area HOME    (CODE)
                                    392 	.area HOME    (CODE)
      000049                        393 __sdcc_program_startup:
      000049 02 02 15         [24]  394 	ljmp	_main
                                    395 ;	return from main will return to caller
                                    396 ;--------------------------------------------------------
                                    397 ; code
                                    398 ;--------------------------------------------------------
                                    399 	.area CSEG    (CODE)
                                    400 ;------------------------------------------------------------
                                    401 ;Allocation info for local variables in function 'check_value'
                                    402 ;------------------------------------------------------------
                                    403 ;num           Allocated to registers r6 r7 
                                    404 ;------------------------------------------------------------
                                    405 ;	UPC47Seg.c:32: unsigned short check_value(unsigned short num) {
                                    406 ;	-----------------------------------------
                                    407 ;	 function check_value
                                    408 ;	-----------------------------------------
      0000A8                        409 _check_value:
                           000007   410 	ar7 = 0x07
                           000006   411 	ar6 = 0x06
                           000005   412 	ar5 = 0x05
                           000004   413 	ar4 = 0x04
                           000003   414 	ar3 = 0x03
                           000002   415 	ar2 = 0x02
                           000001   416 	ar1 = 0x01
                           000000   417 	ar0 = 0x00
      0000A8 AE 82            [24]  418 	mov	r6, dpl
      0000AA AF 83            [24]  419 	mov	r7, dph
                                    420 ;	UPC47Seg.c:33: if (num == 0) return 0xC0;
      0000AC EE               [12]  421 	mov	a,r6
      0000AD 4F               [12]  422 	orl	a,r7
      0000AE 70 04            [24]  423 	jnz	00102$
      0000B0 90 00 C0         [24]  424 	mov	dptr,#0x00c0
      0000B3 22               [24]  425 	ret
      0000B4                        426 00102$:
                                    427 ;	UPC47Seg.c:34: if (num == 1) return 0xF9;
      0000B4 BE 01 07         [24]  428 	cjne	r6,#0x01,00104$
      0000B7 BF 00 04         [24]  429 	cjne	r7,#0x00,00104$
      0000BA 90 00 F9         [24]  430 	mov	dptr,#0x00f9
      0000BD 22               [24]  431 	ret
      0000BE                        432 00104$:
                                    433 ;	UPC47Seg.c:35: if (num == 2) return 0xA4;
      0000BE BE 02 07         [24]  434 	cjne	r6,#0x02,00106$
      0000C1 BF 00 04         [24]  435 	cjne	r7,#0x00,00106$
      0000C4 90 00 A4         [24]  436 	mov	dptr,#0x00a4
      0000C7 22               [24]  437 	ret
      0000C8                        438 00106$:
                                    439 ;	UPC47Seg.c:36: if (num == 3) return 0xB0;
      0000C8 BE 03 07         [24]  440 	cjne	r6,#0x03,00108$
      0000CB BF 00 04         [24]  441 	cjne	r7,#0x00,00108$
      0000CE 90 00 B0         [24]  442 	mov	dptr,#0x00b0
      0000D1 22               [24]  443 	ret
      0000D2                        444 00108$:
                                    445 ;	UPC47Seg.c:37: if (num == 4) return 0x99;
      0000D2 BE 04 07         [24]  446 	cjne	r6,#0x04,00110$
      0000D5 BF 00 04         [24]  447 	cjne	r7,#0x00,00110$
      0000D8 90 00 99         [24]  448 	mov	dptr,#0x0099
      0000DB 22               [24]  449 	ret
      0000DC                        450 00110$:
                                    451 ;	UPC47Seg.c:38: if (num == 5) return 0x92;
      0000DC BE 05 07         [24]  452 	cjne	r6,#0x05,00112$
      0000DF BF 00 04         [24]  453 	cjne	r7,#0x00,00112$
      0000E2 90 00 92         [24]  454 	mov	dptr,#0x0092
      0000E5 22               [24]  455 	ret
      0000E6                        456 00112$:
                                    457 ;	UPC47Seg.c:39: if (num == 6) return 0x82;
      0000E6 BE 06 07         [24]  458 	cjne	r6,#0x06,00114$
      0000E9 BF 00 04         [24]  459 	cjne	r7,#0x00,00114$
      0000EC 90 00 82         [24]  460 	mov	dptr,#0x0082
      0000EF 22               [24]  461 	ret
      0000F0                        462 00114$:
                                    463 ;	UPC47Seg.c:40: if (num == 7) return 0xF8;
      0000F0 BE 07 07         [24]  464 	cjne	r6,#0x07,00116$
      0000F3 BF 00 04         [24]  465 	cjne	r7,#0x00,00116$
      0000F6 90 00 F8         [24]  466 	mov	dptr,#0x00f8
      0000F9 22               [24]  467 	ret
      0000FA                        468 00116$:
                                    469 ;	UPC47Seg.c:41: if (num == 8) return 0x80;
      0000FA BE 08 07         [24]  470 	cjne	r6,#0x08,00118$
      0000FD BF 00 04         [24]  471 	cjne	r7,#0x00,00118$
      000100 90 00 80         [24]  472 	mov	dptr,#0x0080
      000103 22               [24]  473 	ret
      000104                        474 00118$:
                                    475 ;	UPC47Seg.c:42: if (num == 9) return 0x90;
      000104 BE 09 07         [24]  476 	cjne	r6,#0x09,00120$
      000107 BF 00 04         [24]  477 	cjne	r7,#0x00,00120$
      00010A 90 00 90         [24]  478 	mov	dptr,#0x0090
      00010D 22               [24]  479 	ret
      00010E                        480 00120$:
                                    481 ;	UPC47Seg.c:43: return 0x00; // Ensures a value is returned if x <= 0
      00010E 90 00 00         [24]  482 	mov	dptr,#0x0000
                                    483 ;	UPC47Seg.c:44: }
      000111 22               [24]  484 	ret
                                    485 ;------------------------------------------------------------
                                    486 ;Allocation info for local variables in function 'putchar'
                                    487 ;------------------------------------------------------------
                                    488 ;c             Allocated to registers r6 r7 
                                    489 ;------------------------------------------------------------
                                    490 ;	UPC47Seg.c:46: int putchar(int c)
                                    491 ;	-----------------------------------------
                                    492 ;	 function putchar
                                    493 ;	-----------------------------------------
      000112                        494 _putchar:
      000112 AE 82            [24]  495 	mov	r6, dpl
      000114 AF 83            [24]  496 	mov	r7, dph
                                    497 ;	UPC47Seg.c:48: while(!(SCON & 0x02));
      000116                        498 00101$:
      000116 E5 98            [12]  499 	mov	a,_SCON
      000118 30 E1 FB         [24]  500 	jnb	acc.1,00101$
                                    501 ;	UPC47Seg.c:49: SCON &= ~0x02;	SBUF = c;
      00011B 53 98 FD         [24]  502 	anl	_SCON,#0xfd
      00011E 8E 99            [24]  503 	mov	_SBUF,r6
                                    504 ;	UPC47Seg.c:50: return (c);
      000120 8E 82            [24]  505 	mov	dpl, r6
      000122 8F 83            [24]  506 	mov	dph, r7
                                    507 ;	UPC47Seg.c:51: }
      000124 22               [24]  508 	ret
                                    509 ;------------------------------------------------------------
                                    510 ;Allocation info for local variables in function 'Buzz24'
                                    511 ;------------------------------------------------------------
                                    512 ;i             Allocated to registers r7 
                                    513 ;------------------------------------------------------------
                                    514 ;	UPC47Seg.c:71: void Buzz24(void)
                                    515 ;	-----------------------------------------
                                    516 ;	 function Buzz24
                                    517 ;	-----------------------------------------
      000125                        518 _Buzz24:
                                    519 ;	UPC47Seg.c:73: for(uint8_t i=0; i<50; i++) {
      000125 7F 00            [12]  520 	mov	r7,#0x00
      000127                        521 00103$:
      000127 BF 32 00         [24]  522 	cjne	r7,#0x32,00120$
      00012A                        523 00120$:
      00012A 50 11            [24]  524 	jnc	00105$
                                    525 ;	UPC47Seg.c:74: BuzzEr = 1;   Delay2400();   BuzzEr = 0;   Delay2400();
                                    526 ;	assignBit
      00012C D2 94            [12]  527 	setb	_P1_4
      00012E C0 07            [24]  528 	push	ar7
      000130 12 01 3E         [24]  529 	lcall	_Delay2400
                                    530 ;	assignBit
      000133 C2 94            [12]  531 	clr	_P1_4
      000135 12 01 3E         [24]  532 	lcall	_Delay2400
      000138 D0 07            [24]  533 	pop	ar7
                                    534 ;	UPC47Seg.c:73: for(uint8_t i=0; i<50; i++) {
      00013A 0F               [12]  535 	inc	r7
      00013B 80 EA            [24]  536 	sjmp	00103$
      00013D                        537 00105$:
                                    538 ;	UPC47Seg.c:76: }
      00013D 22               [24]  539 	ret
                                    540 ;------------------------------------------------------------
                                    541 ;Allocation info for local variables in function 'Delay2400'
                                    542 ;------------------------------------------------------------
                                    543 ;	UPC47Seg.c:78: void Delay2400(void)
                                    544 ;	-----------------------------------------
                                    545 ;	 function Delay2400
                                    546 ;	-----------------------------------------
      00013E                        547 _Delay2400:
                                    548 ;	UPC47Seg.c:90: __endasm;
      00013E C0 30            [24]  549 	push	0x30
      000140 C0 31            [24]  550 	push	0x31
      000142 75 30 04         [24]  551 	mov	0x30,#4
      000145 75 31 DC         [24]  552 	mov	0x31,#220
      000148                        553 NEXT:
      000148 D5 31 FD         [24]  554 	djnz	0x31,NEXT
      00014B D5 30 FA         [24]  555 	djnz	0x30,NEXT
      00014E D0 31            [24]  556 	pop	0x31
      000150 D0 30            [24]  557 	pop	0x30
                                    558 ;	UPC47Seg.c:91: }
      000152 22               [24]  559 	ret
                                    560 ;------------------------------------------------------------
                                    561 ;Allocation info for local variables in function 'STC89C52RC'
                                    562 ;------------------------------------------------------------
                                    563 ;	UPC47Seg.c:93: void STC89C52RC(void)
                                    564 ;	-----------------------------------------
                                    565 ;	 function STC89C52RC
                                    566 ;	-----------------------------------------
      000153                        567 _STC89C52RC:
                                    568 ;	UPC47Seg.c:95: putchar(2);          putchar(32);        putchar(32);	
      000153 90 00 02         [24]  569 	mov	dptr,#0x0002
      000156 12 01 12         [24]  570 	lcall	_putchar
      000159 90 00 20         [24]  571 	mov	dptr,#0x0020
      00015C 12 01 12         [24]  572 	lcall	_putchar
      00015F 90 00 20         [24]  573 	mov	dptr,#0x0020
      000162 12 01 12         [24]  574 	lcall	_putchar
                                    575 ;	UPC47Seg.c:96: putchar(((Count/1000)+48));        putchar((((Count/100)%10)+48));
      000165 75 43 E8         [24]  576 	mov	__divuint_PARM_2,#0xe8
      000168 75 44 03         [24]  577 	mov	(__divuint_PARM_2 + 1),#0x03
      00016B 85 14 82         [24]  578 	mov	dpl, _Count
      00016E 85 15 83         [24]  579 	mov	dph, (_Count + 1)
      000171 12 03 B6         [24]  580 	lcall	__divuint
      000174 E5 82            [12]  581 	mov	a, dpl
      000176 85 83 F0         [24]  582 	mov	b, dph
      000179 24 30            [12]  583 	add	a, #0x30
      00017B F5 82            [12]  584 	mov	dpl,a
      00017D E4               [12]  585 	clr	a
      00017E 35 F0            [12]  586 	addc	a, b
      000180 F5 83            [12]  587 	mov	dph,a
      000182 12 01 12         [24]  588 	lcall	_putchar
      000185 75 43 64         [24]  589 	mov	__divuint_PARM_2,#0x64
      000188 75 44 00         [24]  590 	mov	(__divuint_PARM_2 + 1),#0x00
      00018B 85 14 82         [24]  591 	mov	dpl, _Count
      00018E 85 15 83         [24]  592 	mov	dph, (_Count + 1)
      000191 12 03 B6         [24]  593 	lcall	__divuint
      000194 75 43 0A         [24]  594 	mov	__moduint_PARM_2,#0x0a
      000197 75 44 00         [24]  595 	mov	(__moduint_PARM_2 + 1),#0x00
      00019A 12 03 DF         [24]  596 	lcall	__moduint
      00019D E5 82            [12]  597 	mov	a, dpl
      00019F 85 83 F0         [24]  598 	mov	b, dph
      0001A2 24 30            [12]  599 	add	a, #0x30
      0001A4 F5 82            [12]  600 	mov	dpl,a
      0001A6 E4               [12]  601 	clr	a
      0001A7 35 F0            [12]  602 	addc	a, b
      0001A9 F5 83            [12]  603 	mov	dph,a
      0001AB 12 01 12         [24]  604 	lcall	_putchar
                                    605 ;	UPC47Seg.c:97: putchar((((Count/10)%10)+48));        putchar(((Count%10)+48));
      0001AE 75 43 0A         [24]  606 	mov	__divuint_PARM_2,#0x0a
      0001B1 75 44 00         [24]  607 	mov	(__divuint_PARM_2 + 1),#0x00
      0001B4 85 14 82         [24]  608 	mov	dpl, _Count
      0001B7 85 15 83         [24]  609 	mov	dph, (_Count + 1)
      0001BA 12 03 B6         [24]  610 	lcall	__divuint
      0001BD 75 43 0A         [24]  611 	mov	__moduint_PARM_2,#0x0a
      0001C0 75 44 00         [24]  612 	mov	(__moduint_PARM_2 + 1),#0x00
      0001C3 12 03 DF         [24]  613 	lcall	__moduint
      0001C6 E5 82            [12]  614 	mov	a, dpl
      0001C8 85 83 F0         [24]  615 	mov	b, dph
      0001CB 24 30            [12]  616 	add	a, #0x30
      0001CD F5 82            [12]  617 	mov	dpl,a
      0001CF E4               [12]  618 	clr	a
      0001D0 35 F0            [12]  619 	addc	a, b
      0001D2 F5 83            [12]  620 	mov	dph,a
      0001D4 12 01 12         [24]  621 	lcall	_putchar
      0001D7 75 43 0A         [24]  622 	mov	__moduint_PARM_2,#0x0a
      0001DA 75 44 00         [24]  623 	mov	(__moduint_PARM_2 + 1),#0x00
      0001DD 85 14 82         [24]  624 	mov	dpl, _Count
      0001E0 85 15 83         [24]  625 	mov	dph, (_Count + 1)
      0001E3 12 03 DF         [24]  626 	lcall	__moduint
      0001E6 E5 82            [12]  627 	mov	a, dpl
      0001E8 85 83 F0         [24]  628 	mov	b, dph
      0001EB 24 30            [12]  629 	add	a, #0x30
      0001ED F5 82            [12]  630 	mov	dpl,a
      0001EF E4               [12]  631 	clr	a
      0001F0 35 F0            [12]  632 	addc	a, b
      0001F2 F5 83            [12]  633 	mov	dph,a
      0001F4 12 01 12         [24]  634 	lcall	_putchar
                                    635 ;	UPC47Seg.c:98: putchar(32);        putchar(107);       putchar(103);        
      0001F7 90 00 20         [24]  636 	mov	dptr,#0x0020
      0001FA 12 01 12         [24]  637 	lcall	_putchar
      0001FD 90 00 6B         [24]  638 	mov	dptr,#0x006b
      000200 12 01 12         [24]  639 	lcall	_putchar
      000203 90 00 67         [24]  640 	mov	dptr,#0x0067
      000206 12 01 12         [24]  641 	lcall	_putchar
                                    642 ;	UPC47Seg.c:99: putchar(13);	putchar(10);
      000209 90 00 0D         [24]  643 	mov	dptr,#0x000d
      00020C 12 01 12         [24]  644 	lcall	_putchar
      00020F 90 00 0A         [24]  645 	mov	dptr,#0x000a
                                    646 ;	UPC47Seg.c:100: }
      000212 02 01 12         [24]  647 	ljmp	_putchar
                                    648 ;------------------------------------------------------------
                                    649 ;Allocation info for local variables in function 'main'
                                    650 ;------------------------------------------------------------
                                    651 ;	UPC47Seg.c:102: void main(void) {
                                    652 ;	-----------------------------------------
                                    653 ;	 function main
                                    654 ;	-----------------------------------------
      000215                        655 _main:
                                    656 ;	UPC47Seg.c:103: TMOD = 0x20;	// Configure UART for 9600 baud, 8 data bits, 1 stop bit. @11.0592 MHz crystal
      000215 75 89 20         [24]  657 	mov	_TMOD,#0x20
                                    658 ;	UPC47Seg.c:104: SCON = 0x40;
      000218 75 98 40         [24]  659 	mov	_SCON,#0x40
                                    660 ;	UPC47Seg.c:105: TH1 = 256 - 11.0592 * 1000 * 1000 / 12 / 32 / 9600 + 0.5;
      00021B 75 8D FD         [24]  661 	mov	_TH1,#0xfd
                                    662 ;	UPC47Seg.c:106: TCON |= 0x40;
      00021E 43 88 40         [24]  663 	orl	_TCON,#0x40
                                    664 ;	UPC47Seg.c:107: SCON |= 0x02;
      000221 43 98 02         [24]  665 	orl	_SCON,#0x02
                                    666 ;	UPC47Seg.c:108: P0 = 0x00; // Initialize port, Set PORT 0 direction to be output
      000224 75 80 00         [24]  667 	mov	_P0,#0x00
                                    668 ;	UPC47Seg.c:109: P1 = 0x00; // Initialize port, Set PORT 1 direction to be output
      000227 75 90 00         [24]  669 	mov	_P1,#0x00
                                    670 ;	UPC47Seg.c:110: P36 = 0;		// Initialize port P3.6 (Relay)
                                    671 ;	assignBit
      00022A C2 B6            [12]  672 	clr	_P36
                                    673 ;	UPC47Seg.c:111: BuzzEr = 0;	// Initialize port P1.4 Buzzer
                                    674 ;	assignBit
      00022C C2 94            [12]  675 	clr	_P1_4
                                    676 ;	UPC47Seg.c:112: P34 = 1;		// Initialize port P3.4   SW P3.4  switch(Active LOW)
                                    677 ;	assignBit
      00022E D2 B4            [12]  678 	setb	_P34
                                    679 ;	UPC47Seg.c:113: P35 = 1;		// Initialize port P3.5   SW P3.5  switch(Active LOW)
                                    680 ;	assignBit
      000230 D2 B5            [12]  681 	setb	_P35
                                    682 ;	UPC47Seg.c:114: printf("STC89C52RC\n");
      000232 74 FB            [12]  683 	mov	a,#___str_0
      000234 C0 E0            [24]  684 	push	acc
      000236 74 0B            [12]  685 	mov	a,#(___str_0 >> 8)
      000238 C0 E0            [24]  686 	push	acc
      00023A 74 80            [12]  687 	mov	a,#0x80
      00023C C0 E0            [24]  688 	push	acc
      00023E 12 04 54         [24]  689 	lcall	_printf
      000241 15 81            [12]  690 	dec	sp
      000243 15 81            [12]  691 	dec	sp
      000245 15 81            [12]  692 	dec	sp
                                    693 ;	UPC47Seg.c:115: printf("Decimal UP Counter with Four 7-Segment Display Multiplexing\n");
      000247 74 07            [12]  694 	mov	a,#___str_1
      000249 C0 E0            [24]  695 	push	acc
      00024B 74 0C            [12]  696 	mov	a,#(___str_1 >> 8)
      00024D C0 E0            [24]  697 	push	acc
      00024F 74 80            [12]  698 	mov	a,#0x80
      000251 C0 E0            [24]  699 	push	acc
      000253 12 04 54         [24]  700 	lcall	_printf
      000256 15 81            [12]  701 	dec	sp
      000258 15 81            [12]  702 	dec	sp
      00025A 15 81            [12]  703 	dec	sp
                                    704 ;	UPC47Seg.c:116: printf("11.0592 MHz crystal, 9600 Baud\n");
      00025C 74 44            [12]  705 	mov	a,#___str_2
      00025E C0 E0            [24]  706 	push	acc
      000260 74 0C            [12]  707 	mov	a,#(___str_2 >> 8)
      000262 C0 E0            [24]  708 	push	acc
      000264 74 80            [12]  709 	mov	a,#0x80
      000266 C0 E0            [24]  710 	push	acc
      000268 12 04 54         [24]  711 	lcall	_printf
      00026B 15 81            [12]  712 	dec	sp
      00026D 15 81            [12]  713 	dec	sp
      00026F 15 81            [12]  714 	dec	sp
                                    715 ;	UPC47Seg.c:117: STC89C52RC();
      000271 12 01 53         [24]  716 	lcall	_STC89C52RC
                                    717 ;	UPC47Seg.c:118: Buzz24();
      000274 12 01 25         [24]  718 	lcall	_Buzz24
                                    719 ;	UPC47Seg.c:120: LED_Segment = 0x00; // Turn off all segments / Turn OFF LEDs on PORT 0
                                    720 ;	UPC47Seg.c:121: Count   =    0;  // Initial Value of Counter
      000277 E4               [12]  721 	clr	a
      000278 F5 80            [12]  722 	mov	_P0,a
      00027A F5 14            [12]  723 	mov	_Count,a
      00027C F5 15            [12]  724 	mov	(_Count + 1),a
                                    725 ;	UPC47Seg.c:123: do {
      00027E                        726 00107$:
                                    727 ;	UPC47Seg.c:124: if(P35==0)
      00027E 20 B5 19         [24]  728 	jb	_P35,00102$
                                    729 ;	UPC47Seg.c:125: {    BuzzEr = 0; 	  // BuzzeR ON
                                    730 ;	assignBit
      000281 C2 94            [12]  731 	clr	_P1_4
                                    732 ;	UPC47Seg.c:126: printf("BuzzeR ON\n");    }	
      000283 74 64            [12]  733 	mov	a,#___str_3
      000285 C0 E0            [24]  734 	push	acc
      000287 74 0C            [12]  735 	mov	a,#(___str_3 >> 8)
      000289 C0 E0            [24]  736 	push	acc
      00028B 74 80            [12]  737 	mov	a,#0x80
      00028D C0 E0            [24]  738 	push	acc
      00028F 12 04 54         [24]  739 	lcall	_printf
      000292 15 81            [12]  740 	dec	sp
      000294 15 81            [12]  741 	dec	sp
      000296 15 81            [12]  742 	dec	sp
      000298 80 17            [24]  743 	sjmp	00103$
      00029A                        744 00102$:
                                    745 ;	UPC47Seg.c:128: {    BuzzEr = 1;	  // BuzzeR OFF
                                    746 ;	assignBit
      00029A D2 94            [12]  747 	setb	_P1_4
                                    748 ;	UPC47Seg.c:129: printf("BuzzeR OFF\n");    }	
      00029C 74 6F            [12]  749 	mov	a,#___str_4
      00029E C0 E0            [24]  750 	push	acc
      0002A0 74 0C            [12]  751 	mov	a,#(___str_4 >> 8)
      0002A2 C0 E0            [24]  752 	push	acc
      0002A4 74 80            [12]  753 	mov	a,#0x80
      0002A6 C0 E0            [24]  754 	push	acc
      0002A8 12 04 54         [24]  755 	lcall	_printf
      0002AB 15 81            [12]  756 	dec	sp
      0002AD 15 81            [12]  757 	dec	sp
      0002AF 15 81            [12]  758 	dec	sp
      0002B1                        759 00103$:
                                    760 ;	UPC47Seg.c:136: DD0 = Count%10;  // Extract Ones Digit	  // DD0 = mask(DD0);
      0002B1 75 43 0A         [24]  761 	mov	__moduint_PARM_2,#0x0a
      0002B4 75 44 00         [24]  762 	mov	(__moduint_PARM_2 + 1),#0x00
      0002B7 85 14 82         [24]  763 	mov	dpl, _Count
      0002BA 85 15 83         [24]  764 	mov	dph, (_Count + 1)
      0002BD 12 03 DF         [24]  765 	lcall	__moduint
      0002C0 AE 82            [24]  766 	mov	r6, dpl
      0002C2 AF 83            [24]  767 	mov	r7, dph
      0002C4 8E 0C            [24]  768 	mov	_DD0,r6
      0002C6 8F 0D            [24]  769 	mov	(_DD0 + 1),r7
                                    770 ;	UPC47Seg.c:137: DD0 = check_value(DD0);
      0002C8 85 0C 82         [24]  771 	mov	dpl, _DD0
      0002CB 85 0D 83         [24]  772 	mov	dph, (_DD0 + 1)
      0002CE 12 00 A8         [24]  773 	lcall	_check_value
      0002D1 85 82 0C         [24]  774 	mov	_DD0,dpl
      0002D4 85 83 0D         [24]  775 	mov	(_DD0 + 1),dph
                                    776 ;	UPC47Seg.c:138: DD1 = (Count/10)%10; // Extract Tens Digit
      0002D7 75 43 0A         [24]  777 	mov	__divuint_PARM_2,#0x0a
      0002DA 75 44 00         [24]  778 	mov	(__divuint_PARM_2 + 1),#0x00
      0002DD 85 14 82         [24]  779 	mov	dpl, _Count
      0002E0 85 15 83         [24]  780 	mov	dph, (_Count + 1)
      0002E3 12 03 B6         [24]  781 	lcall	__divuint
      0002E6 75 43 0A         [24]  782 	mov	__moduint_PARM_2,#0x0a
      0002E9 75 44 00         [24]  783 	mov	(__moduint_PARM_2 + 1),#0x00
      0002EC 12 03 DF         [24]  784 	lcall	__moduint
      0002EF AE 82            [24]  785 	mov	r6, dpl
      0002F1 AF 83            [24]  786 	mov	r7, dph
      0002F3 8E 0E            [24]  787 	mov	_DD1,r6
      0002F5 8F 0F            [24]  788 	mov	(_DD1 + 1),r7
                                    789 ;	UPC47Seg.c:139: DD1 = check_value(DD1);
      0002F7 85 0E 82         [24]  790 	mov	dpl, _DD1
      0002FA 85 0F 83         [24]  791 	mov	dph, (_DD1 + 1)
      0002FD 12 00 A8         [24]  792 	lcall	_check_value
      000300 85 82 0E         [24]  793 	mov	_DD1,dpl
      000303 85 83 0F         [24]  794 	mov	(_DD1 + 1),dph
                                    795 ;	UPC47Seg.c:140: DD2 = (Count/100)%10; // Extract Hundreds Digit
      000306 75 43 64         [24]  796 	mov	__divuint_PARM_2,#0x64
      000309 75 44 00         [24]  797 	mov	(__divuint_PARM_2 + 1),#0x00
      00030C 85 14 82         [24]  798 	mov	dpl, _Count
      00030F 85 15 83         [24]  799 	mov	dph, (_Count + 1)
      000312 12 03 B6         [24]  800 	lcall	__divuint
      000315 75 43 0A         [24]  801 	mov	__moduint_PARM_2,#0x0a
      000318 75 44 00         [24]  802 	mov	(__moduint_PARM_2 + 1),#0x00
      00031B 12 03 DF         [24]  803 	lcall	__moduint
      00031E AE 82            [24]  804 	mov	r6, dpl
      000320 AF 83            [24]  805 	mov	r7, dph
      000322 8E 10            [24]  806 	mov	_DD2,r6
      000324 8F 11            [24]  807 	mov	(_DD2 + 1),r7
                                    808 ;	UPC47Seg.c:141: DD2 = check_value(DD2);
      000326 85 10 82         [24]  809 	mov	dpl, _DD2
      000329 85 11 83         [24]  810 	mov	dph, (_DD2 + 1)
      00032C 12 00 A8         [24]  811 	lcall	_check_value
      00032F 85 82 10         [24]  812 	mov	_DD2,dpl
      000332 85 83 11         [24]  813 	mov	(_DD2 + 1),dph
                                    814 ;	UPC47Seg.c:142: DD3 = (Count/1000);  // Extract Thousands Digit
      000335 75 43 E8         [24]  815 	mov	__divuint_PARM_2,#0xe8
      000338 75 44 03         [24]  816 	mov	(__divuint_PARM_2 + 1),#0x03
      00033B 85 14 82         [24]  817 	mov	dpl, _Count
      00033E 85 15 83         [24]  818 	mov	dph, (_Count + 1)
      000341 12 03 B6         [24]  819 	lcall	__divuint
      000344 AE 82            [24]  820 	mov	r6, dpl
      000346 AF 83            [24]  821 	mov	r7, dph
      000348 8E 12            [24]  822 	mov	_DD3,r6
      00034A 8F 13            [24]  823 	mov	(_DD3 + 1),r7
                                    824 ;	UPC47Seg.c:143: DD3 = check_value(DD3);
      00034C 85 12 82         [24]  825 	mov	dpl, _DD3
      00034F 85 13 83         [24]  826 	mov	dph, (_DD3 + 1)
      000352 12 00 A8         [24]  827 	lcall	_check_value
      000355 85 82 12         [24]  828 	mov	_DD3,dpl
      000358 85 83 13         [24]  829 	mov	(_DD3 + 1),dph
                                    830 ;	UPC47Seg.c:145: for (i = 0; i<=50; i++) {
      00035B E4               [12]  831 	clr	a
      00035C F5 0A            [12]  832 	mov	_i,a
      00035E F5 0B            [12]  833 	mov	(_i + 1),a
      000360                        834 00110$:
                                    835 ;	UPC47Seg.c:146: LED_Segment = DD3;		// DD0;
      000360 85 12 80         [24]  836 	mov	_P0,_DD3
                                    837 ;	UPC47Seg.c:147: P1 = 0xFE; 	//  port P1.0 = 0, Select Ones Digit
      000363 75 90 FE         [24]  838 	mov	_P1,#0xfe
                                    839 ;	UPC47Seg.c:149: Delay2400();
      000366 12 01 3E         [24]  840 	lcall	_Delay2400
                                    841 ;	UPC47Seg.c:150: LED_Segment = DD2;		//  DD1;
      000369 85 10 80         [24]  842 	mov	_P0,_DD2
                                    843 ;	UPC47Seg.c:151: P1 = 0xFD;     //  port P1.1 = 0, Select Tens Digit
      00036C 75 90 FD         [24]  844 	mov	_P1,#0xfd
                                    845 ;	UPC47Seg.c:153: Delay2400();
      00036F 12 01 3E         [24]  846 	lcall	_Delay2400
                                    847 ;	UPC47Seg.c:154: LED_Segment = DD1;		//  DD2;
      000372 85 0E 80         [24]  848 	mov	_P0,_DD1
                                    849 ;	UPC47Seg.c:155: P1 = 0xFB; 		//  port P1.2 = 0, Select Hundreds Digit
      000375 75 90 FB         [24]  850 	mov	_P1,#0xfb
                                    851 ;	UPC47Seg.c:157: Delay2400();
      000378 12 01 3E         [24]  852 	lcall	_Delay2400
                                    853 ;	UPC47Seg.c:158: LED_Segment   = DD0;		// DD3;
      00037B 85 0C 80         [24]  854 	mov	_P0,_DD0
                                    855 ;	UPC47Seg.c:159: P1 = 0xF7; 		//  port P1.3 = 0, Select Thousands Digit
      00037E 75 90 F7         [24]  856 	mov	_P1,#0xf7
                                    857 ;	UPC47Seg.c:161: Delay2400();
      000381 12 01 3E         [24]  858 	lcall	_Delay2400
                                    859 ;	UPC47Seg.c:145: for (i = 0; i<=50; i++) {
      000384 05 0A            [12]  860 	inc	_i
      000386 E4               [12]  861 	clr	a
      000387 B5 0A 02         [24]  862 	cjne	a,_i,00145$
      00038A 05 0B            [12]  863 	inc	(_i + 1)
      00038C                        864 00145$:
      00038C AE 0A            [24]  865 	mov	r6,_i
      00038E AF 0B            [24]  866 	mov	r7,(_i + 1)
      000390 C3               [12]  867 	clr	c
      000391 74 32            [12]  868 	mov	a,#0x32
      000393 9E               [12]  869 	subb	a,r6
      000394 E4               [12]  870 	clr	a
      000395 9F               [12]  871 	subb	a,r7
      000396 50 C8            [24]  872 	jnc	00110$
                                    873 ;	UPC47Seg.c:163: Count = Count + 1 ;
      000398 05 14            [12]  874 	inc	_Count
      00039A E4               [12]  875 	clr	a
      00039B B5 14 02         [24]  876 	cjne	a,_Count,00147$
      00039E 05 15            [12]  877 	inc	(_Count + 1)
      0003A0                        878 00147$:
                                    879 ;	UPC47Seg.c:164: if (Count > 9999) Count = 0;
      0003A0 C3               [12]  880 	clr	c
      0003A1 74 0F            [12]  881 	mov	a,#0x0f
      0003A3 95 14            [12]  882 	subb	a,_Count
      0003A5 74 27            [12]  883 	mov	a,#0x27
      0003A7 95 15            [12]  884 	subb	a,(_Count + 1)
      0003A9 50 05            [24]  885 	jnc	00106$
      0003AB E4               [12]  886 	clr	a
      0003AC F5 14            [12]  887 	mov	_Count,a
      0003AE F5 15            [12]  888 	mov	(_Count + 1),a
      0003B0                        889 00106$:
                                    890 ;	UPC47Seg.c:165: STC89C52RC();
      0003B0 12 01 53         [24]  891 	lcall	_STC89C52RC
                                    892 ;	UPC47Seg.c:166: } while(1);          // endless loop
                                    893 ;	UPC47Seg.c:167: }
      0003B3 02 02 7E         [24]  894 	ljmp	00107$
                                    895 	.area CSEG    (CODE)
                                    896 	.area CONST   (CODE)
                                    897 	.area CONST   (CODE)
      000BFB                        898 ___str_0:
      000BFB 53 54 43 38 39 43 35   899 	.ascii "STC89C52RC"
             32 52 43
      000C05 0A                     900 	.db 0x0a
      000C06 00                     901 	.db 0x00
                                    902 	.area CSEG    (CODE)
                                    903 	.area CONST   (CODE)
      000C07                        904 ___str_1:
      000C07 44 65 63 69 6D 61 6C   905 	.ascii "Decimal UP Counter with Four 7-Segment Display Multiplexing"
             20 55 50 20 43 6F 75
             6E 74 65 72 20 77 69
             74 68 20 46 6F 75 72
             20 37 2D 53 65 67 6D
             65 6E 74 20 44 69 73
             70 6C 61 79 20 4D 75
             6C 74 69 70 6C 65 78
             69 6E 67
      000C42 0A                     906 	.db 0x0a
      000C43 00                     907 	.db 0x00
                                    908 	.area CSEG    (CODE)
                                    909 	.area CONST   (CODE)
      000C44                        910 ___str_2:
      000C44 31 31 2E 30 35 39 32   911 	.ascii "11.0592 MHz crystal, 9600 Baud"
             20 4D 48 7A 20 63 72
             79 73 74 61 6C 2C 20
             39 36 30 30 20 42 61
             75 64
      000C62 0A                     912 	.db 0x0a
      000C63 00                     913 	.db 0x00
                                    914 	.area CSEG    (CODE)
                                    915 	.area CONST   (CODE)
      000C64                        916 ___str_3:
      000C64 42 75 7A 7A 65 52 20   917 	.ascii "BuzzeR ON"
             4F 4E
      000C6D 0A                     918 	.db 0x0a
      000C6E 00                     919 	.db 0x00
                                    920 	.area CSEG    (CODE)
                                    921 	.area CONST   (CODE)
      000C6F                        922 ___str_4:
      000C6F 42 75 7A 7A 65 52 20   923 	.ascii "BuzzeR OFF"
             4F 46 46
      000C79 0A                     924 	.db 0x0a
      000C7A 00                     925 	.db 0x00
                                    926 	.area CSEG    (CODE)
                                    927 	.area XINIT   (CODE)
                                    928 	.area CABS    (ABS,CODE)
