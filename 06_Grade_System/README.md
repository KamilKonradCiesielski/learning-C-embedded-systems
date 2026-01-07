# Academic Grade Decision Logic (C)

A precise C program that processes numerical academic scores to determine both a categorical letter grade and a binary pass/fail status using optimized control flow structures.

## 📝 Challenge Description
The program transforms a raw integer input (0-100) into meaningful academic data. It focuses on handling multiple output states efficiently while ensuring data integrity.

**The logic follows these stages:**
- **Boundary Validation:** Prevents processing of values outside the 0-100 range.
- **Categorization:** Uses integer division to map specific score ranges into "buckets" (tens).
- **Grade Assignment:** Assigns a letter (A-F) based on the calculated tier using a switch-case structure.
- **Status Determination:** Uses a single-line conditional check to verify if the score meets the passing requirement (60 points).



## 🛠️ Key Concepts Covered
In this project, I practiced:
* **Switch-Case Fall-through** – Grouping multiple cases (e.g., 90 and 100) to share the same output, demonstrating an understanding of how the `switch` mechanism executes.
* **Ternary Conditional Operator** – Implementing the `(condition) ? true : false` syntax for concise, readable string assignment.
* **Input Sanitization** – Implementing early-return patterns to handle invalid user data before it reaches the core logic.
* **Integer Arithmetic for Logic** – Using division to simplify complex numerical ranges into discrete categories.



## 🛠️ How to run it
1. Ensure you have a C compiler (like GCC) installed.
2. Compile the code:
   ```bash
   gcc main.c -o grade_system
3. Run the program:
      ```bash
   ./grade_system
