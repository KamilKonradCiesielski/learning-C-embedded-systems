# BMI Calculator & Data Validator

A robust C program that calculates Body Mass Index (BMI) while implementing strict input validation and range-checking logic to ensure data integrity and prevent calculation errors.

## 📝 Challenge Description
The program processes two floating-point inputs (weight and height) to provide a health classification. It is designed to handle "dirty" input and physical edge cases that could otherwise lead to program crashes or medically impossible results.

**The logic follows these stages:**
- **Input Stream Validation:** Monitors `scanf` return codes to detect non-numeric input (e.g., characters) and halt execution safely.
- **Physical Boundary Validation:** Implements strict limits (30–300kg and 1.0–2.5m) using logical "OR" operators to reject unrealistic data.
- **Precision Calculation:** Computes the index using floating-point arithmetic ($BMI = weight / height^2$).
- **Tiered Categorization:** Uses a prioritized `if-else` ladder to map results into standardized health categories.



## 🛠️ Key Concepts Covered
In this project, I practiced:
* **Stream Integrity Monitoring** – Leveraging `scanf` return values to verify successful memory population before proceeding to logic.
* **Early-Return Pattern** – Using `return 0` within validation blocks to stop the execution flow immediately upon detecting invalid data, preventing "garbage" calculations.
* **Logical Operator Mastery** – Differentiating between `||` (OR) for boundary rejection and `&&` (AND) for range-inclusion checks.
* **Floating-Point Formatting** – Using the `%.1f` format specifier to ensure the output meets technical requirements for precision and readability.



## 📊 Expected Behavior
| Input (Weight/Height) | Validation | Output |
| :--- | :--- | :--- |
| `70 1.75` | ✅ Valid | `BMI: 22.9`, `Category: Normal weight` |
| `abc 1.80` | ❌ Type Error | `Invalid input type!` |
| `25 1.80` | ❌ Range Error | `Weight out of range!` |
| `75 3.0` | ❌ Range Error | `Height out of range!` |

## 🛠️ How to run it
1. Ensure you have a C compiler (like GCC) installed.
2. Compile the code:
   ```bash
   gcc main.c -o bmi_analyzer
3. Run the program:
     ```bash
   ./bmi_analyzer
