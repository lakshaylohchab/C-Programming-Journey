// File: 01_modular_prime_armstrong_functions.c
// Purpose: Demonstrate function prototypes, parameters, and return values with Prime & Armstrong checks
// Sample Input: 153 -> Not Prime, Armstrong | 7 -> Prime, Armstrong

#include <stdio.h>

// Function Prototypes
int is_prime(int n);
int power_int(int base, int exp);
int is_armstrong(int n);

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 0;
    }

    printf("\n--- Function Analysis for %d ---\n", num);
    printf("Prime Number     : %s\n", is_prime(num) ? "YES" : "NO");
    printf("Armstrong Number : %s\n", is_armstrong(num) ? "YES" : "NO");

    return 0;
}

// Returns 1 if n is prime, 0 otherwise
int is_prime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

// Computes base^exp using exact integer multiplication
int power_int(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

// Returns 1 if n is an Armstrong number, 0 otherwise
int is_armstrong(int n) {
    int temp = n, digits = 0, sum = 0;

    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    while (temp > 0) {
        int rem = temp % 10;
        sum += power_int(rem, digits);
        temp /= 10;
    }

    return (sum == n);
}
