# Prime Range Sum

## Description
A C program that calculates the sum of all prime numbers within a user-defined range. This project demonstrates the implementation of modular programming and mathematical validation in C.

## Key Features
* **Modular Design:** Separation of concerns using distinct functions for primality testing (`isPrime`) and range summation (`sumOfPrimes`).
* **Input Validation:** Ensures positive integers and valid range boundaries (start < end), providing clear error feedback for invalid data.
* **Efficient Logic:** Implements an iterative primality test using the modulo operator to identify factors.

## Technical Concepts Applied
* **Function Prototypes:** Proper declaration and definition of functions to maintain a clean and organized code structure.
* **Boolean Logic in C:** Using integer returns (0 or 1) to represent truth values for primality checks.
* **Cumulative Accumulation:** Utilizing an accumulator variable within a loop to calculate the final sum.
* **Control Flow:** Effective use of `if-else` statements for validation and `for` loops to process numerical ranges.

## How to Run
1. **Compile the code:**
   ```bash
   gcc main.c -o prime_range_sum
   
2. Execute the program:
  ```bash
  ./prime_range_sum
