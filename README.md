# C Programming Journey 💻

A structured 52-program repository documenting my progression in C from core syntax and bitwise operators to control structures, arrays, strings, pointers, dynamic memory, file handling, and console mini-projects.

**Overall Progress:** `36 / 52 Programs Completed (69%)`

---

## 📂 Master Repository Roadmap (52 Programs)

| Folder | Topic Covered | Status |
| :--- | :--- | :--- |
| **[01-Basics](./01-Basics)** | Input/Output, Data Types, Typecasting, Math & Bitwise Operators | ✅ Completed (8 Programs) |
| **[02-Conditionals](./02-Conditionals)** | `if-else`, Nested Conditions, Logical Operators, `switch-case` | ✅ Completed (8 Programs) |
| **[03-Loops-and-Numbers](./03-Loops-and-Numbers)** | `for`, `while`, Number Theory, Base Conversion & Patterns | ✅ Completed (10 Programs) |
| **[04-Arrays-and-Strings](./04-Arrays-and-Strings)** | 1D/2D Matrices, Searching, Sorting, Custom String Functions | ✅ Completed (10 Programs) |
| **05-Functions-and-Pointers** | Modular Code, Recursion, Storage Classes, Pointers, DMA | ⏳ Upcoming (9 Programs) |
| **06-Structures-Files-and-Projects** | `struct`, `union`, File I/O, Macros & Capstone Mini-Project | ⏳ Upcoming (7 Programs) |

---

## 📘 Completed Modules

### 1. `01-Basics` (8 Programs)
1. **`01_hello_world.c`** — Standard output (`printf`) and formatting with escape sequences (`\n`, `\t`).
2. **`02_data_types_sizeof.c`** — User input (`scanf`) across `char`, `int`, `float`, and `double` with `sizeof()` memory inspection.
3. **`03_arithmetic_typecasting.c`** — All 5 arithmetic operators (`+`, `-`, `*`, `/`, `%`) and explicit `(float)` typecasting.
4. **`04_swap_two_numbers.c`** — Swapping variables both with a temporary variable and using pure arithmetic.
5. **`05_temperature_and_days.c`** — Celsius-to-Fahrenheit conversion and breaking total days into years, weeks, and days.
6. **`06_ascii_value_converter.c`** — Character-to-ASCII integer mapping and character arithmetic.
7. **`07_math_library_formulas.c`** — Compound interest and right-triangle hypotenuse calculation using `math.h` (`pow`, `sqrt`).
8. **`08_bitwise_and_increment.c`** — Bitwise operations (`&`, `|`, `^`, `<<`, `>>`) and pre-increment vs. post-increment (`++x` vs `x++`).

### 2. `02-Conditionals` (8 Programs)
1. **`01_largest_and_ternary.c`** — Finding the largest of three numbers using `if-else` and checking parity with the ternary operator (`? :`).
2. **`02_leap_year_date_validator.c`** — Validating calendar dates (`DD/MM/YYYY`) and checking leap year rules.
3. **`03_quadratic_equation_roots.c`** — Finding real, equal, and complex imaginary roots of $ax^2 + bx + c = 0$.
4. **`04_electricity_bill_slabs.c`** — Multi-tier slab billing calculation with surcharge using an `else-if` ladder.
5. **`05_switch_menu_calculator.c`** — Menu-driven arithmetic calculator using `switch-case` with division-by-zero protection.
6. **`06_character_vowel_classifier.c`** — Classifying characters into uppercase, lowercase, digit, or symbol, plus vowel/consonant checks.
7. **`07_triangle_validator_type.c`** — Triangle inequality validation and classification (equilateral, isosceles, scalene, right-angled).
8. **`08_student_grade_evaluator.c`** — Multi-subject pass verification and percentage-based grade assignment.

### 3. `03-Loops-and-Numbers` (10 Programs)
1. **`01_multiplication_and_factorial.c`** — Sum of first $N$ natural numbers, factorial ($N!$), and multiplication table.
2. **`02_reverse_and_digit_sum.c`** — Digit counting, sum of digits, integer reversal, and palindrome check.
3. **`03_armstrong_and_strong_number.c`** — Checking Armstrong numbers and Strong (Krishnamurthy) numbers.
4. **`04_prime_check_and_range.c`** — Optimized $\sqrt{N}$ primality test and generating all primes within a range $[L, R]$.
5. **`05_gcd_lcm_euclidean.c`** — Greatest Common Divisor (GCD) and Least Common Multiple (LCM) using the Euclidean algorithm.
6. **`06_fibonacci_series.c`** — Generating $N$ Fibonacci terms and verifying whether a number belongs to the sequence.
7. **`07_binary_decimal_converter.c`** — Bidirectional Decimal-to-Binary and Binary-to-Decimal base conversion.
8. **`08_harmonic_and_taylor_series.c`** — Computing Harmonic series and Euler factorial series ($1 + \frac{1}{1!} + \frac{1}{2!} + \dots + \frac{1}{N!}$).
9. **`09_star_pyramid_diamond_patterns.c`** — Right triangle, hollow square, centered pyramid, and full diamond star patterns.
10. **`10_floyd_and_pascal_triangle.c`** — Floyd's number triangle, binary `0-1` triangle, and Pascal's triangle.

### 4. `04-Arrays-and-Strings` (10 Programs)
1. **`01_array_min_max_second_largest.c`** — Single-pass calculation of sum, average, min, max, and second largest element in a 1D array.
2. **`02_array_insert_delete_reverse.c`** — Element insertion and deletion at index $K$, plus two-pointer in-place array reversal.
3. **`03_linear_and_binary_search.c`** — Menu-driven Linear Search ($O(n)$) and Binary Search ($O(\log n)$) with comparison count tracking.
4. **`04_bubble_selection_insertion_sort.c`** — Side-by-side implementation and swap/shift comparison of Bubble, Selection, and Insertion Sort.
5. **`05_matrix_add_multiply.c`** — 2D matrix addition and full $M \times N$ multiplication with dimension validation.
6. **`06_matrix_transpose_and_diagonals.c`** — Matrix transpose, main/secondary diagonal sums, and symmetric matrix verification.
7. **`07_custom_string_functions.c`** — Manual implementation of `strlen`, `strcpy`, `strcat`, and `strcmp` without `<string.h>`.
8. **`08_string_palindrome_and_reverse.c`** — Two-pointer string reversal and case/space-insensitive palindrome check.
9. **`09_vowel_word_frequency_counter.c`** — Full sentence breakdown counting words, vowels, consonants, digits, spaces, and special symbols.
10. **`10_anagram_and_duplicate_chars.c`** — Frequency-array anagram checker and duplicate character counter.

---

## ⚙️ How to Compile and Run Locally

```bash
# 1. Navigate to any topic folder
cd 04-Arrays-and-Strings

# 2. Compile the program using GCC
gcc 04_bubble_selection_insertion_sort.c -o output

# 3. Run the executable
./output
```

---

## 🛠️ Tools & Environment
* **Language:** C (C11 / C17 Standard)
* **Compiler:** GCC (MinGW)
* **Editor:** Visual Studio Code
