// File: 03_quadratic_equation_roots.c
// Purpose: Find all roots of a quadratic equation (ax^2 + bx + c = 0)
// Sample Input: 1 -5 6 -> Roots: 3.00, 2.00 | 1 2 5 -> Complex Roots

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2, realPart, imagPart;

    printf("Enter coefficients a, b, and c (for ax^2 + bx + c = 0): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("Invalid input: 'a' cannot be 0 for a quadratic equation.\n");
        return 0;
    }

    discriminant = (b * b) - (4 * a * c);
    printf("\nDiscriminant (D) = %.2lf\n", discriminant);

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct:\n");
        printf("Root 1 = %.2lf\nRoot 2 = %.2lf\n", root1, root2);
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("Roots are real and equal:\n");
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    } else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and imaginary:\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imagPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imagPart);
    }

    return 0;
}
