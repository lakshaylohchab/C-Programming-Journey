// File: 02_reverse_and_digit_sum.c
// Purpose: Count digits, sum digits, reverse an integer, and check if it is a Palindrome
// Sample Input: 12321 | Output: Digits = 5, Sum = 9, Reversed = 12321 (Palindrome)

#include <stdio.h>

int main() {
    int num, original, remainder;
    int reversed = 0, digit_sum = 0, digit_count = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;
    int temp = (num < 0) ? -num : num; // Handle negative numbers for digit count/sum

    if (temp == 0) {
        digit_count = 1;
    }

    while (temp > 0) {
        remainder = temp % 10;
        digit_sum += remainder;
        reversed = (reversed * 10) + remainder;
        digit_count++;
        temp /= 10;
    }

    if (num < 0) {
        reversed = -reversed;
    }

    printf("\n--- Digit Analysis ---\n");
    printf("Original Number : %d\n", original);
    printf("Total Digits    : %d\n", digit_count);
    printf("Sum of Digits   : %d\n", digit_sum);
    printf("Reversed Number : %d\n", reversed);

    if (original >= 0 && original == reversed) {
        printf("Palindrome Check: %d is a PALINDROME number.\n", original);
    } else {
        printf("Palindrome Check: %d is NOT a palindrome number.\n", original);
    }

    return 0;
}
