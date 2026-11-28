// File: 04_call_by_value_vs_reference.c
// Purpose: Demonstrate pointer addressing (&, *) and compare call-by-value vs call-by-reference
// Sample Input: 15 40

#include <stdio.h>

void swap_by_value(int a, int b);
void swap_by_reference(int *a, int *b);

int main() {
    int x, y;

    printf("Enter two integers (x and y): ");
    scanf("%d %d", &x, &y);

    // Pointer basics: inspecting memory addresses and dereferencing
    int *px = &x;
    int *py = &y;

    printf("\n--- Pointer Memory Inspection ---\n");
    printf("x = %d | Address (&x) = %p | Dereferenced (*px) = %d\n", x, (void *)px, *px);
    printf("y = %d | Address (&y) = %p | Dereferenced (*py) = %d\n", y, (void *)py, *py);

    // 1. Call by Value (passes copies — original variables remain unchanged)
    printf("\n--- 1. Call by Value ---\n");
    swap_by_value(x, y);
    printf("After swap_by_value in main()     : x = %d, y = %d (Unchanged)\n", x, y);

    // 2. Call by Reference (passes addresses — modifies original variables)
    printf("\n--- 2. Call by Reference ---\n");
    swap_by_reference(&x, &y);
    printf("After swap_by_reference in main() : x = %d, y = %d (Swapped!)\n", x, y);

    return 0;
}

void swap_by_value(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swap_by_value()            : a = %d, b = %d\n", a, b);
}

void swap_by_reference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside swap_by_reference()        : *a = %d, *b = %d\n", *a, *b);
}
