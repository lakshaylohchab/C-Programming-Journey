// File: 05_gcd_lcm_euclidean.c
// Purpose: Find the Greatest Common Divisor (GCD/HCF) and Least Common Multiple (LCM) of two numbers
// Sample Input: 36 60 | Output: GCD = 12, LCM = 180

#include <stdio.h>

int main() {
    int num1, num2, a, b, remainder, gcd, lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 <= 0 || num2 <= 0) {
        printf("Please enter positive integers greater than 0.\n");
        return 0;
    }

    a = num1;
    b = num2;

    // Euclidean Algorithm: GCD(a, b) = GCD(b, a % b)
    while (b != 0) {
        remainder = a % b;
        a = b;
        b = remainder;
    }
    gcd = a;

    // Formula: (num1 * num2) = GCD * LCM
    lcm = (num1 / gcd) * num2;

    printf("\n--- GCD & LCM Results ---\n");
    printf("Numbers : %d and %d\n", num1, num2);
    printf("GCD/HCF : %d\n", gcd);
    printf("LCM     : %d\n", lcm);

    return 0;
}
