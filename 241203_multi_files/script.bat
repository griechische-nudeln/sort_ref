@echo off
chcp 65001 > log
del log

g++ -std=c++17 -o program.exe main.cpp array_operations.cpp

program.exe
