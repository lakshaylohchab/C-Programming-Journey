// File: 08_bitwise_and_increment.c
// Purpose: Demonstrate pre/post-increment and bitwise operators (&, |, ^, <<, >>)
// Sample Input: 5 3

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers (e.g., 5 3): ");
    scanf("%d %d", &a, &b);

    printf("\n--- Bitwise Operations ---\n");
    printf("Bitwise AND (%d & %d)         = %d\n", a, b, a & b);
    printf("Bitwise OR  (%d | %d)         = %d\n", a, b, a | b);
    printf("Bitwise XOR (%d ^ %d)         = %d\n", a, b, a ^ b);
    printf("Left Shift  (%d << 1)         = %d\n", a, a << 1);
    printf("Right Shift (%d >> 1)         = %d\n", a, a >> 1);

    // Pre-increment vs Post-increment demonstration
    int x = a;
    printf("\n--- Increment Operators (Starting with x = %d) ---\n", x);
    printf("Value during post-increment (x++) : %d\n", x++);
    printf("Value after post-increment        : %d\n", x);
    printf("Value during pre-increment  (++x) : %d\n", ++x);

    return 0;
}
