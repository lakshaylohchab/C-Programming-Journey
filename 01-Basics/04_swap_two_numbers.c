// File: 04_swap_two_numbers.c
// Purpose: Swap two numbers using a temporary variable and without a third variable
// Sample Input: 10 25

#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter two integers (a and b): ");
    scanf("%d %d", &a, &b);

    printf("\nOriginal Values            : a = %d, b = %d\n", a, b);

    // Method 1: Using a third temporary variable
    temp = a;
    a = b;
    b = temp;
    printf("After Swap 1 (using temp)  : a = %d, b = %d\n", a, b);

    // Method 2: Without using a third variable (swapping back)
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After Swap 2 (no 3rd var)  : a = %d, b = %d\n", a, b);

    return 0;
}
