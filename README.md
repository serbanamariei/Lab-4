# Lab 4 – Fundamentals of the C Language: Functions

This folder contains solved problems from Lab 4 of the "Programming Fundamentals" course.

## Topics Covered

- Declaring, defining, and calling functions in C
- Function prototypes and return types
- Parameter passing (by value)
- Using `void` for functions with no return or parameters
- Writing modular programs with `.h` and `.c` files
- Compiling and linking multi-file projects with `clang`
- Using the math library (`math.h`) and `floor`, `sin`, `exp`

## Problems

### Part 1 – Basic Function Practice
- Modify values of two real numbers using a function and observe behavior
- Implement and use functions to compute:
  - Arithmetic mean
  - Geometric mean
  - Maximum and minimum of three integers
- Read and sum a sequence of positive integers ending in 0, then divide by a value
- Check if three integers can represent triangle sides, and determine triangle type
- Define and evaluate mathematical functions `f(x)` and `g(x, y)`

### Part 2 – Advanced Function Usage
- Read `n` pairs of integers and display those with a prime GCD
- Detect "friendly numbers" (e.g., 220 and 284)
- Classify numbers as deficient, perfect, or abundant based on divisor sum

## Build Instructions

To compile and link C programs using multiple source files:

clang -Wall -c functions.c     # Compile your functions
clang -Wall -c main.c          # Compile your main program
clang functions.o main.o -o program_name  # Link everything into executable

If math functions are used (e.g. floor, sin, exp), link with:

clang functions.o main.o -lm -o program_name
