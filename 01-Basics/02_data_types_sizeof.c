// File: 02_data_types_sizeof.c
// Purpose: Demonstrate basic data types, user input, and memory size in C
// Sample Input: A, 18, 9.25, 98.765432

#include <stdio.h>

int main() {
    char section;
    int age;
    float cgpa;
    double accuracy;

    printf("Enter your section (single letter): ");
    scanf(" %c", &section);

    printf("Enter your age (integer): ");
    scanf("%d", &age);

    printf("Enter your target CGPA (float): ");
    scanf("%f", &cgpa);

    printf("Enter a high-precision decimal (double): ");
    scanf("%lf", &accuracy);

    printf("\n--- Stored Values & Memory Sizes ---\n");
    printf("char   : %c        | Size: %zu byte\n", section, sizeof(section));
    printf("int    : %d       | Size: %zu bytes\n", age, sizeof(age));
    printf("float  : %.2f     | Size: %zu bytes\n", cgpa, sizeof(cgpa));
    printf("double : %.6lf | Size: %zu bytes\n", accuracy, sizeof(accuracy));

    return 0;
}
