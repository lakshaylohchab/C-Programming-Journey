// File: 07_binary_decimal_converter.c
// Purpose: Convert Decimal to Binary and Binary to Decimal using loops
// Sample Input: Decimal = 25 -> 11001 | Binary = 10110 -> 22

#include <stdio.h>

int main() {
    int decimal_input, temp_dec;
    long long binary_output = 0, place = 1;

    // Part 1: Decimal to Binary Conversion
    printf("Enter a non-negative decimal integer (e.g., 25): ");
    scanf("%d", &decimal_input);

    temp_dec = decimal_input;
    while (temp_dec > 0) {
        int rem = temp_dec % 2;
        binary_output += rem * place;
        place *= 10;
        temp_dec /= 2;
    }

    printf("Binary equivalent of %d = %lld\n\n", decimal_input, binary_output);

    // Part 2: Binary to Decimal Conversion
    long long binary_input, temp_bin;
    int decimal_output = 0, base_power = 1, valid = 1;

    printf("Enter a binary number (e.g., 10110): ");
    scanf("%lld", &binary_input);

    temp_bin = binary_input;
    while (temp_bin > 0) {
        int last_digit = temp_bin % 10;
        if (last_digit != 0 && last_digit != 1) {
            valid = 0;
            break;
        }
        decimal_output += last_digit * base_power;
        base_power *= 2;
        temp_bin /= 10;
    }

    if (valid && binary_input >= 0) {
        printf("Decimal equivalent of %lld = %d\n", binary_input, decimal_output);
    } else {
        printf("Invalid binary number! Binary numbers can only contain 0s and 1s.\n");
    }

    return 0;
}
