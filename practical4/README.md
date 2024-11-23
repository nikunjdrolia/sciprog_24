# Readme for trapezoid.c

## Overview
This C program calculates tangent values for angles from 0 to 60 degrees, and estimates the area under the curve of `tan(x)` using the Trapezoidal Rule.

## Key Features
- Calculates `tan(x)` for every 5 degrees from 0 to 60.
- Approximates the integral of `tan(x)` from 0 to 60 degrees.
- Compares trapezoidal approximation with the exact value (`log(2)`).

## Run Instructions
Compile and run with:
```sh
gcc trapezoid.c -o runme -lm
./runme
```

## Dependencies
- C compiler (e.g., GCC).
- `<stdio.h>` and `<math.h>` libraries.

