// File: 10_floyd_and_pascal_triangle.c
// Purpose: Print Floyd's Triangle, 0-1 Binary Triangle, and Pascal's Triangle
// Sample Input: 5

#include <stdio.h>

int main() {
    int n;
    printf("Enter number of rows (e.g., 5): ");
    scanf("%d", &n);

    // 1. Floyd's Triangle
    printf("\n1. Floyd's Triangle:\n");
    int count = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%-3d ", count++);
        }
        printf("\n");
    }

    // 2. Binary (0-1) Triangle
    printf("\n2. Binary (0-1) Triangle:\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", (i + j) % 2 == 0 ? 1 : 0);
        }
        printf("\n");
    }

    // 3. Pascal's Triangle
    printf("\n3. Pascal's Triangle:\n");
    for (int i = 0; i < n; i++) {
        for (int space = 1; space <= n - i; space++) {
            printf("  ");
        }
        int coeff = 1;
        for (int j = 0; j <= i; j++) {
            printf("%4d", coeff);
            coeff = coeff * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}
