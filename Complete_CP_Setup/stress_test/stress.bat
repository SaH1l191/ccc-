@echo off
g++ generator.cpp -o generator.exe
g++ brute.cpp -o brute.exe
g++ main.cpp -o main.exe

:loop
generator.exe > inputf.in
main.exe < inputf.in > out1.txt
brute.exe < inputf.in > out2.txt
fc out1.txt out2.txt > nul
if errorlevel 1 (
    echo WRONG
    pause
    exit
)
goto loop
