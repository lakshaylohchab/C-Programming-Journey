// File: 01_array_min_max_second_largest.c
// Purpose: Find minimum, maximum, sum, average, and second largest element in a 1D array in one pass
// Sample Input: N = 5, Elements = 12 45 7 45 23 | Output: Min=7, Max=45, Second Largest=23

#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    int arr[100];

    printf("Enter number of elements (1 to 100): ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid size! Please enter a value between 1 and 100.\n");
        return 0;
    }

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min_val = arr[0];
    int max_val = INT_MIN;
    int second_max = INT_MIN;
    long long sum = 0;

    // Single-pass traversal
    for (int i = 0; i < n; i++) {
        sum += arr[i];

        if (arr[i] < min_val) {
            min_val = arr[i];
        }

        if (arr[i] > max_val) {
            second_max = max_val;
            max_val = arr[i];
        } else if (arr[i] > second_max && arr[i] != max_val) {
            second_max = arr[i];
        }
    }

    printf("\n--- Array Statistics ---\n");
    printf("Sum            : %lld\n", sum);
    printf("Average        : %.2f\n", (float)sum / n);
    printf("Minimum        : %d\n", min_val);
    printf("Maximum        : %d\n", max_val);

    if (second_max == INT_MIN) {
        printf("Second Largest : Does not exist (all elements are identical or N < 2)\n");
    } else {
        printf("Second Largest : %d\n", second_max);
    }

    return 0;
}
