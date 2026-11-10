// File: 04_prime_check_and_range.c
// Purpose: Check if a number is prime using sqrt(N) optimization and print all primes in [L, R]
// Sample Input: N = 29, Range = 10 to 50

#include <stdio.h>

int main() {
    int n, is_prime = 1;
    int low, high;

    // Part 1: Single Number Prime Check
    printf("Enter an integer to check for primality: ");
    scanf("%d", &n);

    if (n <= 1) {
        is_prime = 0;
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                is_prime = 0;
                break;
            }
        }
    }

    if (is_prime) {
        printf("Result: %d is a PRIME number.\n\n", n);
    } else {
        printf("Result: %d is NOT a prime number.\n\n", n);
    }

    // Part 2: Print all primes in a given range [low, high]
    printf("Enter range (low and high) to list all primes (e.g., 10 50): ");
    scanf("%d %d", &low, &high);

    printf("\nPrime numbers between %d and %d:\n", low, high);
    int count = 0;
    for (int num = low; num <= high; num++) {
        if (num <= 1) continue;

        int prime_flag = 1;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                prime_flag = 0;
                break;
            }
        }

        if (prime_flag) {
            printf("%d ", num);
            count++;
        }
    }
    printf("\nTotal primes found: %d\n", count);

    return 0;
}
