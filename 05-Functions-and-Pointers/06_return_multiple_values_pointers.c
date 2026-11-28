// File: 06_return_multiple_values_pointers.c
// Purpose: Pass an array to a function and return min, max, and average via output pointer parameters
// Sample Input: N = 5, Elements = 18 7 42 29 14

#include <stdio.h>

void analyze_array(const int *arr, int n, int *min_out, int *max_out, double *avg_out);

int main() {
    int arr[100], n;
    int min_val, max_val;
    double avg_val;

    printf("Enter number of elements (1 to 100): ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid array size!\n");
        return 0;
    }

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Pass addresses of min_val, max_val, and avg_val so the function can populate all 3
    analyze_array(arr, n, &min_val, &max_val, &avg_val);

    printf("\n--- Results Returned via Pointers ---\n");
    printf("Minimum Value : %d\n", min_val);
    printf("Maximum Value : %d\n", max_val);
    printf("Average Value : %.2lf\n", avg_val);

    return 0;
}

void analyze_array(const int *arr, int n, int *min_out, int *max_out, double *avg_out) {
    *min_out = arr[0];
    *max_out = arr[0];
    long long sum = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] < *min_out) *min_out = arr[i];
        if (arr[i] > *max_out) *max_out = arr[i];
        sum += arr[i];
    }

    *avg_out = (double)sum / n;
}
