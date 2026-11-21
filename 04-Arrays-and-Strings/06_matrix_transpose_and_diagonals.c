// File: 06_matrix_transpose_and_diagonals.c
// Purpose: Find transpose of a matrix; if square, compute diagonal sums and check symmetry
// Sample Input: 3x3 Symmetric Matrix -> 1 2 3 / 2 4 5 / 3 5 6

#include <stdio.h>

int main() {
    int r, c;
    int mat[10][10], trans[10][10];

    printf("Enter rows and columns of the matrix (max 10x10): ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of the %dx%d matrix:\n", r, c);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
            trans[j][i] = mat[i][j]; // Compute transpose directly
        }
    }

    printf("\n--- Transpose Matrix (%dx%d) ---\n", c, r);
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            printf("%4d ", trans[i][j]);
        }
        printf("\n");
    }

    // Diagonal sums and symmetry apply only to square matrices
    if (r == c) {
        int main_diag = 0, sec_diag = 0, is_symmetric = 1;

        for (int i = 0; i < r; i++) {
            main_diag += mat[i][i];
            sec_diag += mat[i][r - 1 - i];

            for (int j = 0; j < c; j++) {
                if (mat[i][j] != trans[i][j]) {
                    is_symmetric = 0;
                }
            }
        }

        printf("\n--- Square Matrix Properties ---\n");
        printf("Main Diagonal Sum      : %d\n", main_diag);
        printf("Secondary Diagonal Sum : %d\n", sec_diag);
        printf("Symmetry Check         : %s\n",
               is_symmetric ? "YES (Matrix equals its transpose)" : "NO (Not symmetric)");
    } else {
        printf("\nNote: Diagonal sums and symmetry check apply only to square matrices.\n");
    }

    return 0;
}
