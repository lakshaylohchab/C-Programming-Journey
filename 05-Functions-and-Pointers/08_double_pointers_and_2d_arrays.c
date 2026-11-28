// File: 08_double_pointers_and_2d_arrays.c
// Purpose: Demonstrate pointer-to-pointer (int **) and dynamically allocate/free a 2D matrix
// Sample Input: Rows = 2, Cols = 3, Elements = 1 2 3 4 5 6

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Part 1: Pointer-to-Pointer Chain
    int value = 42;
    int *ptr = &value;
    int **dptr = &ptr;

    printf("--- 1. Double Pointer Chain ---\n");
    printf("value       = %d\n", value);
    printf("*ptr        = %d (Address of value : %p)\n", *ptr, (void *)ptr);
    printf("**dptr      = %d (Address of ptr   : %p)\n\n", **dptr, (void *)dptr);

    // Part 2: Dynamic 2D Matrix using int **
    int rows, cols;
    printf("--- 2. Dynamic 2D Matrix Allocation ---\n");
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    if (rows <= 0 || cols <= 0) {
        printf("Rows and columns must be positive!\n");
        return 0;
    }

    // Allocate array of row pointers
    int **matrix = malloc(rows * sizeof(int *));
    if (matrix == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Allocate columns for each row
    for (int i = 0; i < rows; i++) {
        matrix[i] = malloc(cols * sizeof(int));
        if (matrix[i] == NULL) {
            printf("Row %d allocation failed!\n", i);
            for (int k = 0; k < i; k++) free(matrix[k]);
            free(matrix);
            return 1;
        }
    }

    printf("Enter %d elements for the %dx%d matrix:\n", rows * cols, rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nDynamically Allocated Matrix & Row Sums:\n");
    for (int i = 0; i < rows; i++) {
        int row_sum = 0;
        for (int j = 0; j < cols; j++) {
            printf("%4d ", *(*(matrix + i) + j));
            row_sum += matrix[i][j];
        }
        printf(" | Row %d Sum = %d\n", i + 1, row_sum);
    }

    // Free each row first, then the array of pointers
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
