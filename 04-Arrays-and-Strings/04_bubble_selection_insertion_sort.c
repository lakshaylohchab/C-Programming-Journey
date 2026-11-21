// File: 04_bubble_selection_insertion_sort.c
// Purpose: Sort the same input array using Bubble, Selection, and Insertion Sort for comparison
// Sample Input: N = 6, Elements = 64 25 12 22 11 90

#include <stdio.h>

int main() {
    int n;
    int orig[100], b_arr[100], s_arr[100], i_arr[100];

    printf("Enter number of elements (1 to 100): ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid size!\n");
        return 0;
    }

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &orig[i]);
        b_arr[i] = orig[i];
        s_arr[i] = orig[i];
        i_arr[i] = orig[i];
    }

    // 1. Bubble Sort (Optimized with early exit flag)
    int bubble_swaps = 0;
    for (int i = 0; i < n - 1; i++) {
        int swapped = 0;
        for (int j = 0; j < n - 1 - i; j++) {
            if (b_arr[j] > b_arr[j + 1]) {
                int temp = b_arr[j];
                b_arr[j] = b_arr[j + 1];
                b_arr[j + 1] = temp;
                swapped = 1;
                bubble_swaps++;
            }
        }
        if (!swapped) break;
    }

    // 2. Selection Sort
    int selection_swaps = 0;
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (s_arr[j] < s_arr[min_idx]) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            int temp = s_arr[i];
            s_arr[i] = s_arr[min_idx];
            s_arr[min_idx] = temp;
            selection_swaps++;
        }
    }

    // 3. Insertion Sort
    int insertion_shifts = 0;
    for (int i = 1; i < n; i++) {
        int key = i_arr[i];
        int j = i - 1;
        while (j >= 0 && i_arr[j] > key) {
            i_arr[j + 1] = i_arr[j];
            j--;
            insertion_shifts++;
        }
        i_arr[j + 1] = key;
    }

    printf("\n--- Sorting Results ---\n");
    printf("Bubble Sort    (Swaps : %2d) -> ", bubble_swaps);
    for (int i = 0; i < n; i++) printf("%d ", b_arr[i]);

    printf("\nSelection Sort (Swaps : %2d) -> ", selection_swaps);
    for (int i = 0; i < n; i++) printf("%d ", s_arr[i]);

    printf("\nInsertion Sort (Shifts: %2d) -> ", insertion_shifts);
    for (int i = 0; i < n; i++) printf("%d ", i_arr[i]);
    printf("\n");

    return 0;
}
