# N Numbers Sum

A precise C program designed to process a dynamic stream of integers by first defining a sequence length and then performing real-time accumulation to compute the total sum.

## 📝 Challenge Description
The program follows a structured data-reading pattern where the first input dictates the behavior of the subsequent loop. This ensures that the application only processes a specific, user-defined set of data points, demonstrating fundamental control over program flow.

**The logic follows these stages:**
- **Initial Quantity Definition:** Reads an integer `n` to establish the iteration limit for the processing cycle.
- **Dynamic Iteration:** Implements a controlled `while` loop that executes exactly `n` times, ensuring no extra data is processed.
- **Real-Time Accumulation:** Updates the total sum in-place as each new value is entered, optimizing memory usage by only storing one "current" number at a time.
- **Output Formatting:** Displays the final accumulated result after the sequence terminates.



## 🛠️ Key Concepts Covered
In this project, I practiced:
* **Loop-Driven Logic** – Mastering the `while` statement and manual de-incrementing (`n--`) to control execution cycles.
* **Variable Initialization** – Ensuring the accumulator (`sum`) starts at zero to prevent memory "garbage" from corrupting the result.
* **Stream-Based Processing** – Handling multiple inputs sequentially without the need for complex data structures like arrays.
* **Interactive I/O** – Using `printf` and `scanf` in tandem to create a clear, guided user experience.

## 📊 Expected Behavior
| Input (N + Sequence) | Validation | Output |
| :--- | :--- | :--- |
| `3` then `1 5 6` | ✅ Success | `The total is 12` |
| `2` then `10 20` | ✅ Success | `The total is 30` |
| `1` then `100` | ✅ Success | `The total is 100` |

## 🛠️ How to run it
1. Ensure you have a C compiler (like GCC) installed.
2. Compile the code:
   ```bash
   gcc main.c -o n_numbers_accumulator
3. Run the program
   ```bash
   ./n_numbers_accumulator
