// File: 07_dynamic_memory_malloc_calloc.c
// Purpose: Allocate arrays at runtime with calloc/malloc, resize with realloc, and release with free
// Sample Input: Initial size = 3, Elements = 10 20 30 | New size = 5, Extra = 40 50

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, new_n;

    printf("Enter initial number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Size must be positive!\n");
        return 0;
    }

    // 1. Allocate with calloc (initializes all memory blocks to 0)
    int *arr = calloc(n, sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("\nDefault values right after calloc(): ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    printf("Enter %d integers to fill the array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 2. Resize dynamically using realloc (always assign to a temp pointer first for safety)
    printf("\nEnter new larger size (greater than %d): ", n);
    scanf("%d", &new_n);

    if (new_n > n) {
        int *temp = realloc(arr, new_n * sizeof(int));
        if (temp == NULL) {
            printf("Memory reallocation failed! Keeping original array.\n");
            free(arr);
            return 1;
        }
        arr = temp;

        printf("Enter %d additional integer(s): ", new_n - n);
        for (int i = n; i < new_n; i++) {
            scanf("%d", &arr[i]);
        }
        n = new_n;
    }

    // 3. Demonstrate malloc by creating a separate dynamic copy
    int *copy = malloc(n * sizeof(int));
    if (copy == NULL) {
        printf("Memory allocation for copy failed!\n");
        free(arr);
        return 1;
    }

    for (int i = 0; i < n; i++) {
        copy[i] = arr[i];
    }

    printf("\n--- Final Dynamic Array (%d elements) ---\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", copy[i]);
    }
    printf("\n");

    // 4. Free all heap memory to prevent memory leaks
    free(arr);
    free(copy);
    arr = NULL;
    copy = NULL;

    return 0;
}
