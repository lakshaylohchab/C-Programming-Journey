// File: 09_star_pyramid_diamond_patterns.c
// Purpose: Print 4 classic star patterns using nested for loops
// Sample Input: 5

#include <stdio.h>

int main() {
    int n;
    printf("Enter number of rows (e.g., 5): ");
    scanf("%d", &n);

    // 1. Right-Angled Star Triangle
    printf("\n1. Right-Angled Triangle:\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // 2. Hollow Square Pattern
    printf("\n2. Hollow Square:\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    // 3. Full Centered Star Pyramid
    printf("\n3. Centered Star Pyramid:\n");
    for (int i = 1; i <= n; i++) {
        for (int space = 1; space <= n - i; space++) {
            printf("  ");
        }
        for (int star = 1; star <= (2 * i - 1); star++) {
            printf("* ");
        }
        printf("\n");
    }

    // 4. Full Diamond Pattern
    printf("\n4. Full Diamond Pattern:\n");
    // Upper half
    for (int i = 1; i <= n; i++) {
        for (int space = 1; space <= n - i; space++) printf("  ");
        for (int star = 1; star <= (2 * i - 1); star++) printf("* ");
        printf("\n");
    }
    // Lower inverted half
    for (int i = n - 1; i >= 1; i--) {
        for (int space = 1; space <= n - i; space++) printf("  ");
        for (int star = 1; star <= (2 * i - 1); star++) printf("* ");
        printf("\n");
    }

    return 0;
}
