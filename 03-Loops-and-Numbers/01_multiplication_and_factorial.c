// File: 01_multiplication_and_factorial.c
// Purpose: Calculate sum of first N natural numbers, N factorial (N!), and print a multiplication table
// Sample Input: 5 | Output: Sum = 15, Factorial = 120, and Table of 5

#include <stdio.h>

int main() {
    int n, sum = 0;
    unsigned long long factorial = 1;

    printf("Enter a positive integer N: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid input! Please enter a non-negative integer.\n");
        return 0;
    }

    // Calculate sum of first N numbers and N! in a single for loop
    for (int i = 1; i <= n; i++) {
        sum += i;
        factorial *= i;
    }

    printf("\n--- Results for N = %d ---\n", n);
    printf("Sum of first %d natural numbers : %d\n", n, sum);
    printf("Factorial (%d!)                 : %llu\n", n, factorial);

    printf("\n--- Multiplication Table of %d ---\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %2d = %d\n", n, i, n * i);
    }

    return 0;
}
