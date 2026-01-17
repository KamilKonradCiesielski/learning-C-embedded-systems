# Multiplication Table Generator

## Description
A C program that generates a formatted $I \times J$ multiplication table based on user input. This project demonstrates the practical application of nested iteration and controlled output formatting in terminal-based applications.

## Key Features
* **Nested Control Flow:** Utilizes two-level loop nesting to traverse rows and columns.
* **Formatted Output:** Employs field width specifiers (`%4d`) to ensure consistent column alignment for multi-digit results.
* **Interactive Input:** Features dynamic table sizing based on user-provided integers.

## Technical Concepts Applied
* **Nested `for` Loops:** The outer loop manages row transitions, while the inner loop handles column-wise calculations.
* **Arithmetic Mapping:** Each cell value is computed dynamically as $i \times j$.
* **Standard I/O:** Usage of `scanf` for input and `printf` with escape sequences (`\n`) for layout structure.

## How to Run
1. Compile the code:
   ```bash
   gcc multiplication_table.c -o multiplication_table
2.Execute the program:
```bash
./multiplication_table
