// File: 02_leap_year_date_validator.c
// Purpose: Validate whether a given date (DD MM YYYY) is a valid calendar date and check for a leap year
// Sample Input: 29 02 2024 -> Valid Date (Leap Year) | 29 02 2025 -> Invalid Date

#include <stdio.h>

int main() {
    int day, month, year;
    int max_days = 0, is_leap = 0;

    printf("Enter date (DD MM YYYY): ");
    scanf("%d %d %d", &day, &month, &year);

    // Check if year is a leap year
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        is_leap = 1;
    }

    // Determine maximum days in the entered month
    if (month == 1 || month == 3 || month == 5 || month == 7 ||
        month == 8 || month == 10 || month == 12) {
        max_days = 31;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        max_days = 30;
    } else if (month == 2) {
        max_days = is_leap ? 29 : 28;
    }

    // Validate the complete date
    printf("\n--- Date Validation Result ---\n");
    if (year < 1 || month < 1 || month > 12 || day < 1 || day > max_days) {
        printf("%02d/%02d/%04d is an INVALID calendar date.\n", day, month, year);
    } else {
        printf("%02d/%02d/%04d is a VALID calendar date.\n", day, month, year);
        if (is_leap) {
            printf("Note: %d is a Leap Year.\n", year);
        } else {
            printf("Note: %d is not a Leap Year.\n", year);
        }
    }

    return 0;
}
