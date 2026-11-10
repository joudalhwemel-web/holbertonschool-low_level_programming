# Simple Calculator

This project is a simple calculator written in C.

## Features
- Addition
- Subtraction
- Multiplication
- Division
- Quit using option 0

## Compilation
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator

## Usage
./calculator

## Number Type
The calculator uses double-precision decimal numbers.
All four operations support decimal values.
Results are displayed using %g without unnecessary trailing zeros.
Division by zero prints: Error: division by zero
