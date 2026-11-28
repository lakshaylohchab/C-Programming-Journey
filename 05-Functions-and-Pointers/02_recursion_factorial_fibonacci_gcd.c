// File: 02_recursion_factorial_fibonacci_gcd.c
// Purpose: Implement Factorial, Nth Fibonacci term, Euclidean GCD, and Sum of Digits using recursion
// Sample Input: N = 6, GCD pair = 48 18, Number = 9472

#include <stdio.h>

unsigned long long factorial_rec(int n);
int fibonacci_rec(int n);
int gcd_rec(int a, int b);
int sum_digits_rec(int n);

int main() {
    int n, a, b, num;

    printf("Enter a non-negative integer N (recommended <= 20) for Factorial & Fibonacci: ");
    scanf("%d", &n);

    if (n >= 0 && n <= 20) {
        printf("Factorial (%d!)           : %llu\n", n, factorial_rec(n));
        printf("Fibonacci Term #%d        : %d\n\n", n, fibonacci_rec(n));
    } else {
        printf("Please keep N between 0 and 20 to avoid overflow/slow recursion.\n\n");
    }

    printf("Enter two positive integers to find their GCD: ");
    scanf("%d %d", &a, &b);
    if (a > 0 && b > 0) {
        printf("GCD(%d, %d)               : %d\n\n", a, b, gcd_rec(a, b));
    } else {
        printf("Please enter positive integers for GCD.\n\n");
    }

    printf("Enter an integer to find the recursive sum of its digits: ");
    scanf("%d", &num);
    if (num < 0) num = -num;
    printf("Sum of digits            : %d\n", sum_digits_rec(num));

    return 0;
}

unsigned long long factorial_rec(int n) {
    if (n <= 1) return 1;              // Base case
    return n * factorial_rec(n - 1);   // Recursive step
}

int fibonacci_rec(int n) {
    if (n == 0) return 0;              // Base case 1
    if (n == 1) return 1;              // Base case 2
    return fibonacci_rec(n - 1) + fibonacci_rec(n - 2);
}

int gcd_rec(int a, int b) {
    if (b == 0) return a;              // Base case
    return gcd_rec(b, a % b);
}

int sum_digits_rec(int n) {
    if (n == 0) return 0;              // Base case
    return (n % 10) + sum_digits_rec(n / 10);
}
