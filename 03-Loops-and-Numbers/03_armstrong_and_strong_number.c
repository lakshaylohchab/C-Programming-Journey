// File: 03_armstrong_and_strong_number.c
// Purpose: Check if a number is an Armstrong number (e.g., 153, 9474) or a Strong number (e.g., 145)
// Sample Input: 153 -> Armstrong | 145 -> Strong (1! + 4! + 5! = 145)

#include <stdio.h>

int main() {
    int num, temp, digits = 0;
    int armstrong_sum = 0, strong_sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 0;
    }

    // Count number of digits
    temp = num;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    // Calculate Armstrong sum and Strong sum simultaneously
    temp = num;
    while (temp > 0) {
        int rem = temp % 10;

        // 1. Compute rem^digits using integer multiplication (avoids floating-point rounding bugs)
        int power = 1;
        for (int i = 0; i < digits; i++) {
            power *= rem;
        }
        armstrong_sum += power;

        // 2. Compute rem! (factorial of the digit) for Strong number check
        int fact = 1;
        for (int i = 1; i <= rem; i++) {
            fact *= i;
        }
        strong_sum += fact;

        temp /= 10;
    }

    printf("\n--- Special Number Checks for %d ---\n", num);
    if (armstrong_sum == num) {
        printf("Armstrong Check : YES (%d equals the sum of its digits raised to power %d)\n", num, digits);
    } else {
        printf("Armstrong Check : NO  (Sum of powers = %d)\n", armstrong_sum);
    }

    if (strong_sum == num) {
        printf("Strong Check    : YES (%d equals the sum of factorials of its digits)\n", num);
    } else {
        printf("Strong Check    : NO  (Sum of digit factorials = %d)\n", strong_sum);
    }

    return 0;
}
