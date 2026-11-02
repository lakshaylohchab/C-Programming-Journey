// File: 03_arithmetic_typecasting.c
// Purpose: Perform arithmetic operations and demonstrate explicit typecasting
// Sample Input: 17 5

#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter two integers separated by a space (e.g., 17 5): ");
    scanf("%d %d", &num1, &num2);

    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    int int_quotient = num1 / num2;
    int remainder = num1 % num2;

    // Explicit typecasting: converts num1 to float before dividing
    float exact_quotient = (float)num1 / num2;

    printf("\n--- Arithmetic Results ---\n");
    printf("Addition (%d + %d)          = %d\n", num1, num2, sum);
    printf("Subtraction (%d - %d)       = %d\n", num1, num2, difference);
    printf("Multiplication (%d * %d)    = %d\n", num1, num2, product);
    printf("Integer Division (%d / %d)  = %d\n", num1, num2, int_quotient);
    printf("Modulo Remainder (%d %% %d)  = %d\n", num1, num2, remainder);
    printf("Exact Division ((float)%d / %d) = %.2f\n", num1, num2, exact_quotient);

    return 0;
}
