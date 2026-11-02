// File: 07_math_library_formulas.c
// Purpose: Calculate Compound Interest and Right-Triangle Hypotenuse using math.h
// Sample Input: P=10000, R=5, T=2 | Base=3, Height=4

#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, amount, compound_interest;
    double base, height, hypotenuse;

    // Part 1: Compound Interest using pow()
    printf("Enter Principal, Rate (%%), and Time (years): ");
    scanf("%lf %lf %lf", &principal, &rate, &time);

    amount = principal * pow((1.0 + rate / 100.0), time);
    compound_interest = amount - principal;

    printf("Total Amount      = %.2lf\n", amount);
    printf("Compound Interest = %.2lf\n\n", compound_interest);

    // Part 2: Hypotenuse using sqrt()
    printf("Enter base and height of a right-angled triangle: ");
    scanf("%lf %lf", &base, &height);

    hypotenuse = sqrt((base * base) + (height * height));
    printf("Hypotenuse length = %.2lf\n", hypotenuse);

    return 0;
}
