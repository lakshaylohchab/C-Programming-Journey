// File: 05_matrix_add_multiply.c
// Purpose: Perform 2D Matrix Addition and Matrix Multiplication with dimension validation
// Sample Input: Matrix A (2x2), Matrix B (2x2)

#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    int A[10][10], B[10][10], sum[10][10], prod[10][10];

    printf("Enter rows and columns for Matrix A (max 10x10): ");
    scanf("%d %d", &r1, &c1);

    printf("Enter elements of Matrix A (%dx%d):\n", r1, c1);
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nEnter rows and columns for Matrix B (max 10x10): ");
    scanf("%d %d", &r2, &c2);

    printf("Enter elements of Matrix B (%dx%d):\n", r2, c2);
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // 1. Matrix Addition (requires r1 == r2 and c1 == c2)
    printf("\n--- Matrix Addition (A + B) ---\n");
    if (r1 == r2 && c1 == c2) {
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                sum[i][j] = A[i][j] + B[i][j];
                printf("%4d ", sum[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Addition not possible: dimensions (%dx%d) and (%dx%d) do not match.\n", r1, c1, r2, c2);
    }

    // 2. Matrix Multiplication (requires c1 == r2)
    printf("\n--- Matrix Multiplication (A x B) ---\n");
    if (c1 == r2) {
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                prod[i][j] = 0;
                for (int k = 0; k < c1; k++) {
                    prod[i][j] += A[i][k] * B[k][j];
                }
                printf("%4d ", prod[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Multiplication not possible: columns of A (%d) != rows of B (%d).\n", c1, r2);
    }

    return 0;
}
