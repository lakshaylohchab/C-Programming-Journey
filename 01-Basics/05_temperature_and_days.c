// File: 05_temperature_and_days.c
// Purpose: Convert Celsius to Fahrenheit and break total days into years, weeks, and days
// Sample Input: 37 (Celsius), 400 (Days)

#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    int total_days, years, weeks, remaining_days;

    // Part 1: Temperature Conversion
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    printf("%.2f Celsius = %.2f Fahrenheit\n\n", celsius, fahrenheit);

    // Part 2: Days Breakdown
    printf("Enter total number of days (e.g., 400): ");
    scanf("%d", &total_days);

    years = total_days / 365;
    weeks = (total_days % 365) / 7;
    remaining_days = (total_days % 365) % 7;

    printf("%d days = %d Year(s), %d Week(s), and %d Day(s)\n",
           total_days, years, weeks, remaining_days);

    return 0;
}
