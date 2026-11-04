// File: 07_triangle_validator_type.c
// Purpose: Check if three sides form a valid triangle and classify its type
// Sample Input: 3 4 5 -> Valid Right-Angled Scalene Triangle

#include <stdio.h>

int main() {
    double a, b, c;
    printf("Enter three side lengths of a triangle: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    printf("\n--- Triangle Analysis ---\n");
    // Validity check: Sum of any two sides must be strictly greater than the third
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("The given sides form a VALID triangle.\n");

        // Classification by sides
        if (a == b && b == c) {
            printf("Type by sides : Equilateral Triangle\n");
        } else if (a == b || b == c || a == c) {
            printf("Type by sides : Isosceles Triangle\n");
        } else {
            printf("Type by sides : Scalene Triangle\n");
        }

        // Classification by angles (Right-angled check using Pythagoras theorem)
        if ((a*a + b*b == c*c) || (a*a + c*c == b*b) || (b*b + c*c == a*a)) {
            printf("Type by angle : Right-Angled Triangle\n");
        } else {
            printf("Type by angle : Non-Right-Angled Triangle\n");
        }
    } else {
        printf("The given sides CANNOT form a valid triangle.\n");
    }

    return 0;
}
