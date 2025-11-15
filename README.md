# C Programming Lab Final Report

## Overview
This repository contains solutions to 20 fundamental C programming problems, covering basic to intermediate concepts. The problems are designed to test understanding of control structures, data structures, and algorithms.

## Repository Structure
```
labReport/
├── code/                          # All C program files
│   ├── problem01_sum_of_two_numbers.c
│   ├── problem02_even_or_odd.c
│   ├── problem03_largest_of_three.c
│   ├── problem04_sum_of_n_natural_numbers.c
│   ├── problem05_multiplication_table.c
│   ├── problem06_factorial_calculator.c
│   ├── problem07_reverse_a_number.c
│   ├── problem08_count_digits.c
│   ├── problem09_prime_number_checker.c
│   ├── problem10_sum_of_array_elements.c
│   ├── problem11_find_largest_in_array.c
│   ├── problem12_simple_calculator.c
│   ├── problem13_fibonacci_series.c
│   ├── problem14_palindrome_number.c
│   ├── problem15_array_reversal.c
│   ├── problem16_count_vowels.c
│   ├── problem17_bubble_sort.c
│   ├── problem18_string_length.c
│   ├── problem19_matrix_addition.c
│   └── problem20_linear_search.c
├── C Programming Lab Final Report.docx  # Original lab report
└── README.md                      # This file
```

## Problems Overview

### Basic Level (Problems 1-12)
1. **Sum of Two Numbers** - Basic arithmetic operation
2. **Even or Odd** - Conditional logic using modulus operator
3. **Largest of Three Numbers** - Multiple conditional comparisons
4. **Sum of N Natural Numbers** - Loop iteration and accumulation
5. **Multiplication Table** - Formatted output using loops
6. **Factorial Calculator** - Loop-based multiplication
7. **Reverse a Number** - Number manipulation using modulus and division
8. **Count Digits** - Number analysis using loops
9. **Prime Number Checker** - Efficient primality testing
10. **Sum of Array Elements** - Basic array traversal
11. **Find Largest in Array** - Array search algorithm
12. **Simple Calculator** - Switch statement and operator handling

### Intermediate Level (Problems 13-20)
13. **Fibonacci Series** - Sequence generation
14. **Palindrome Number** - Number reversal and comparison
15. **Array Reversal** - Two-pointer technique
16. **Count Vowels** - String manipulation and character checking
17. **Bubble Sort** - Sorting algorithm implementation
18. **String Length** - String traversal without library functions
19. **Matrix Addition** - 2D array operations
20. **Linear Search** - Sequential search algorithm

## How to Compile and Run

### Prerequisites
- GCC compiler installed on your system
- Terminal/Command prompt access

### Compilation
To compile any program, use the following command:
```bash
gcc code/problem<number>_<name>.c -o <output_name>
```

**Examples:**
```bash
# Compile problem 1
gcc code/problem01_sum_of_two_numbers.c -o sum

# Compile problem 9
gcc code/problem09_prime_number_checker.c -o prime

# Compile problem 17
gcc code/problem17_bubble_sort.c -o bubble_sort
```

### Execution
After compilation, run the executable:
```bash
# On Linux/Mac
./<output_name>

# On Windows
<output_name>.exe
```

**Examples:**
```bash
./sum
./prime
./bubble_sort
```

### Compile All Programs
To compile all programs at once:
```bash
# Create bin directory for executables
mkdir -p bin

# Compile all programs
for file in code/*.c; do
    name=$(basename "$file" .c)
    gcc "$file" -o "bin/$name"
done
```

## Key Concepts Covered

### Control Structures
- **if-else statements** - Decision making
- **switch-case** - Multiple condition handling
- **for loops** - Fixed iteration
- **while loops** - Conditional iteration

### Data Structures
- **Arrays (1D)** - Linear data storage
- **Arrays (2D)** - Matrix operations
- **Strings** - Character array manipulation

### Algorithms
- **Searching** - Linear search
- **Sorting** - Bubble sort
- **Number Theory** - Prime checking, factorial, Fibonacci
- **String Processing** - Vowel counting, length calculation

### Programming Techniques
- **Input/Output** - scanf, printf operations
- **Type Handling** - int, float, char, long long
- **Operators** - Arithmetic, logical, relational, modulus
- **Error Handling** - Division by zero, invalid input

## Testing Examples

### Problem 1: Sum of Two Numbers
```
Input: 5 10
Output: Sum = 15
```

### Problem 9: Prime Number Checker
```
Input: 17
Output: 17 is Prime

Input: 15
Output: 15 is Not Prime
```

### Problem 17: Bubble Sort
```
Input: 64 34 25 12 22 11
Output: Sorted array: 11 12 22 25 34 64
```

### Problem 19: Matrix Addition
```
Input:
Rows: 2, Columns: 2
Matrix 1: 1 2
          3 4
Matrix 2: 5 6
          7 8
Output:
Result: 6 8
        10 12
```

## Skills Demonstrated
- Algorithm design and implementation
- Code optimization
- Error handling
- Testing and debugging
- Documentation
- Problem-solving approach

## Success Metrics
- **Total Problems:** 20
- **Success Rate:** 100%
- **Categories Covered:** Basic arithmetic, conditionals, loops, arrays, strings, matrices
- **Algorithms Implemented:** Searching, sorting, mathematical computations

## Notes
- All programs use standard C libraries (`stdio.h`)
- Variable-length arrays (VLA) are used for dynamic sizing
- Each program includes descriptive comments
- Programs follow consistent coding style
- All test cases have been verified

## Future Enhancements
- Add more advanced algorithms (binary search, quicksort, merge sort)
- Implement data structures (linked lists, stacks, queues)
- Add file I/O operations
- Include error handling for edge cases
- Create unit tests for each program

## Contributing
Feel free to:
- Report bugs or issues
- Suggest improvements
- Add more test cases
- Optimize existing solutions

## License
Educational use only - Created as part of C Programming Lab coursework

---
**Course:** Introduction to Programming in C (Lab)
**Total Problems:** 20
**Status:** Complete
