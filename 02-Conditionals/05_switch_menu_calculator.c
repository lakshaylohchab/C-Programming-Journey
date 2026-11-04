// File: 05_switch_menu_calculator.c
// Purpose: Perform arithmetic operations using a switch-case statement
// Sample Input: 15, /, 4 -> 15.00 / 4.00 = 3.75

#include <stdio.h>

int main() {
    double num1, num2;
    char op;

    printf("Enter an expression (e.g., 15 + 4 or 12.5 * 3): ");
    scanf("%lf %c %lf", &num1, &op, &num2);

    printf("\n--- Calculator Output ---\n");
    switch (op) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0.0) {
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed!\n");
            }
            break;
        case '%':
            if ((int)num2 != 0) {
                printf("%d %% %d = %d\n", (int)num1, (int)num2, (int)num1 % (int)num2);
            } else {
                printf("Error: Modulo by zero is not allowed!\n");
            }
            break;
        default:
            printf("Error: Invalid operator '%c'. Please use +, -, *, /, or %%.\n", op);
    }

    return 0;
}
