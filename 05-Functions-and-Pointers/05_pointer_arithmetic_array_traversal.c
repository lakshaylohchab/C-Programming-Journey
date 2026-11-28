// File: 05_pointer_arithmetic_array_traversal.c
// Purpose: Traverse, sum, and reverse an array using pure pointer arithmetic (no [] indexing in logic)
// Sample Input: N = 5, Elements = 10 20 30 40 50

#include <stdio.h>

int main() {
    int arr[100], n;
    int *ptr = arr; // Points to arr[0]

    printf("Enter number of elements (1 to 100): ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid array size!\n");
        return 0;
    }

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", ptr + i); // Equivalent to &arr[i]
    }

    // 1. Traverse elements, show addresses, and compute sum using *(ptr + i)
    long long sum = 0;
    printf("\n--- Array Elements via Pointer Arithmetic ---\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d : Value = %4d | Address = %p\n",
               i, *(ptr + i), (void *)(ptr + i));
        sum += *(ptr + i);
    }
    printf("Total Sum : %lld\n", sum);

    // 2. Reverse the array in-place using two pointers
    int *left = arr;
    int *right = arr + n - 1;
    while (left < right) {
        int temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }

    printf("\n--- Reversed Array ---\n");
    for (int *p = arr; p < arr + n; p++) {
        printf("%d ", *p);
    }
    printf("\n");

    return 0;
}
