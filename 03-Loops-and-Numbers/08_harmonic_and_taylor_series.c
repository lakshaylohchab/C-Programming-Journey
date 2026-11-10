// File: 08_harmonic_and_taylor_series.c
// Purpose: Compute Harmonic Series (1 + 1/2 + ... + 1/N) and Euler Factorial Series (1 + 1/1! + 1/2! + ... + 1/N!)
// Sample Input: 5

#include <stdio.h>

int main() {
    int n;
    double harmonic_sum = 0.0;
    double factorial_series_sum = 1.0; // Starts with 1 (which is 1/0!)
    double factorial = 1.0;

    printf("Enter the number of terms (N): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        harmonic_sum += 1.0 / i;
        factorial *= i;
        factorial_series_sum += 1.0 / factorial;
    }

    printf("\n--- Mathematical Series Results (N = %d) ---\n", n);
    printf("1. Harmonic Series  (1 + 1/2 + ... + 1/%d)       = %.6lf\n", n, harmonic_sum);
    printf("2. Factorial Series (1 + 1/1! + 1/2! + ... + 1/%d!) = %.6lf\n", n, factorial_series_sum);

    return 0;
}
