@echo off
PATH = C:\Windows\System32;D:\cygwin64;D:\Program Files\SDCC\bin;%PATH%
set src=UPC47Seg
@echo on
sdcc %src%.c
@echo off
if %ERRORLEVEL% equ 0 (GOTO END)
timeout 999
REM timeout /T 999

:END
echo.
echo エラーは有りません。
@echo off
set bk=back
if exist %src%.asm (move %src%.asm %bk% > NUL)
if exist %src%.lk  (move %src%.lk  %bk% > NUL)
if exist %src%.lst (move %src%.lst %bk% > NUL)
if exist %src%.map (move %src%.map %bk% > NUL)
if exist %src%.mem (move %src%.mem %bk% > NUL)
if exist %src%.rel (move %src%.rel %bk% > NUL)
if exist %src%.sym (move %src%.sym %bk% > NUL)
if exist %src%.hex (move %src%.hex %bk% > NUL)
if exist %src%.ihx (ren %src%.ihx %src%.hex > NUL)
timeout 3
REM timeout /T 3
