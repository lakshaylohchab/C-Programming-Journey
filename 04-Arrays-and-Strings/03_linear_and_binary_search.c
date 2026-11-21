// File: 03_linear_and_binary_search.c
// Purpose: Implement Linear Search O(n) and Binary Search O(log n) in a menu-driven program
// Note: Binary Search requires the input array to be sorted in ascending order

#include <stdio.h>

int main() {
    int arr[100], n, target, choice;

    printf("Enter number of elements (1 to 100): ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid size!\n");
        return 0;
    }

    printf("Enter %d integers (enter in ascending order if using Binary Search): ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target value to search: ");
    scanf("%d", &target);

    printf("\nChoose Search Algorithm:\n");
    printf("1. Linear Search (works on any array)\n");
    printf("2. Binary Search (requires sorted array)\n");
    printf("Enter choice (1 or 2): ");
    scanf("%d", &choice);

    int found_index = -1;
    int comparisons = 0;

    if (choice == 1) {
        for (int i = 0; i < n; i++) {
            comparisons++;
            if (arr[i] == target) {
                found_index = i;
                break;
            }
        }
        printf("\n--- Linear Search Result ---\n");
    } else if (choice == 2) {
        int low = 0, high = n - 1;
        while (low <= high) {
            comparisons++;
            int mid = low + (high - low) / 2; // Prevents integer overflow

            if (arr[mid] == target) {
                found_index = mid;
                break;
            } else if (arr[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        printf("\n--- Binary Search Result ---\n");
    } else {
        printf("Invalid choice!\n");
        return 0;
    }

    if (found_index != -1) {
        printf("Element %d FOUND at index %d (position %d).\n", target, found_index, found_index + 1);
    } else {
        printf("Element %d NOT FOUND in the array.\n", target);
    }
    printf("Total comparisons made: %d\n", comparisons);

    return 0;
}
