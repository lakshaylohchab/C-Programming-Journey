// File: 06_fibonacci_series.c
// Purpose: Generate the first N Fibonacci terms and check if a target number belongs to the sequence
// Sample Input: Terms = 10, Target = 21

#include <stdio.h>

int main() {
    int n, target;
    long long first = 0, second = 1, next;

    printf("Enter the number of Fibonacci terms to generate: ");
    scanf("%d", &n);

    printf("\n--- First %d Fibonacci Terms ---\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%lld ", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n\n");

    // Part 2: Check if a given number belongs to the Fibonacci sequence
    printf("Enter an integer to check if it is a Fibonacci number: ");
    scanf("%d", &target);

    long long a = 0, b = 1;
    while (a < target) {
        long long temp = a + b;
        a = b;
        b = temp;
    }

    if (target >= 0 && a == target) {
        printf("Result: %d IS a Fibonacci number.\n", target);
    } else {
        printf("Result: %d is NOT a Fibonacci number.\n", target);
    }

    return 0;
}
