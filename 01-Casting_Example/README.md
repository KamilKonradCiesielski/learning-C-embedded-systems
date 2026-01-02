# 🌡️ Type Casting Example

A simple program demonstrating the concept of **Explicit Casting** in C by converting a floating-point number (`double`) to an integer (`int`).

## 🎯 Purpose
The goal of this project is to show how to manually convert data types and understand what happens to the decimal part during the process.

## 🛠️ Key Concepts
* **Double to Int conversion**: Using `(int)` to manually cast a variable.
* **Truncation**: Demonstrating how C handles decimals during casting (it truncates/cuts off the fractional part, it does not round it).
* **Format Specifiers**:
    * `%.1f` - used for displaying one decimal place.
    * `%d` - used for displaying integers.
## 🛠️ How to run it
* **Ensure you have a C compiler (like GCC) installed.**
* **Compile the code**:
     `gcc main.c -o cast_example`
* **Run the program**:
     `./cast_example`
