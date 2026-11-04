// File: 01_largest_and_ternary.c
// Purpose: Find the largest of three numbers using if-else and check odd/even using the ternary operator
// Sample Input: 24 58 31

#include <stdio.h>

int main() {
    int a, b, c, largest;

    printf("Enter three integers separated by spaces: ");
    scanf("%d %d %d", &a, &b, &c);

    // 1. Finding the largest using if - else if - else
    if (a >= b && a >= c) {
        largest = a;
    } else if (b >= a && b >= c) {
        largest = b;
    } else {
        largest = c;
    }

    printf("\n--- Results ---\n");
    printf("Largest number : %d\n", largest);

    // 2. Checking if the largest number is Even or Odd using Ternary Operator (? :)
    (largest % 2 == 0) ? printf("Parity check   : %d is Even\n", largest)
                       : printf("Parity check   : %d is Odd\n", largest);

    return 0;
}
