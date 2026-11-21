// File: 02_array_insert_delete_reverse.c
// Purpose: Insert an element at index K, delete an element at index K, and reverse an array in-place
// Sample Input: N = 5, Elements = 10 20 30 40 50

#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n, pos, val;

    printf("Enter initial number of elements (1 to 99): ");
    scanf("%d", &n);

    if (n <= 0 || n >= MAX_SIZE) {
        printf("Invalid array size!\n");
        return 0;
    }

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 1. Insertion at index pos (0-based)
    printf("\nEnter index (0 to %d) and value to insert: ", n);
    scanf("%d %d", &pos, &val);

    if (pos < 0 || pos > n) {
        printf("Invalid insertion index!\n");
    } else {
        for (int i = n; i > pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos] = val;
        n++;

        printf("After Insertion : ");
        for (int i = 0; i < n; i++) printf("%d ", arr[i]);
        printf("\n");
    }

    // 2. Deletion at index pos (0-based)
    printf("\nEnter index (0 to %d) to delete: ", n - 1);
    scanf("%d", &pos);

    if (pos < 0 || pos >= n) {
        printf("Invalid deletion index!\n");
    } else {
        for (int i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;

        printf("After Deletion  : ");
        for (int i = 0; i < n; i++) printf("%d ", arr[i]);
        printf("\n");
    }

    // 3. In-place reversal using two pointers
    for (int left = 0, right = n - 1; left < right; left++, right--) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
    }

    printf("\nAfter Reversal  : ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
