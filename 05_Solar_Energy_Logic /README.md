# Solar Energy Availability Checker (C)

A simple C program that analyzes a set of atmospheric and technical conditions to determine if a given day is optimal for solar energy harvesting.

## 📝 Challenge Description
The program evaluates complex logical conditions using relational and logical operators (AND, OR, NOT).

**Conditions to be met:**
- It must be sunny (`isSunny`).
- Wind speed must be less than 10.
- Solar panel output must be less than 15 (e.g., due to inverter limits).
- **Additionally:** The temperature must be above 20 degrees OR there must be no clouds.

## 🛠️ Key Concepts Covered
In this project, I practiced:
* **Complex Boolean Expressions** – Combining multiple conditions using `&&` and `||`.
* **Operator Precedence** – Properly grouping conditions using parentheses to ensure correct evaluation.
* **Data Types** – Using `int` for binary/logical flags and `float` for precise measurements.
* **Control Flow** – Managing program output using `if-else` statements.

## 🛠️ How to run it
1.Ensure you have a C compiler (like GCC) installed.
2. Compile the code:
   ```bash
   gcc main.c -o solar_logic
```
3.Run the program:
 ```bash
./solar_logic
```  
