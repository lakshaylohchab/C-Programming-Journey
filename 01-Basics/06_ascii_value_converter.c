// File: 06_ascii_value_converter.c
// Purpose: Find the ASCII value of a character and demonstrate character arithmetic
// Sample Input: A | Output: ASCII = 65, Next Char = B, Lowercase = a (97)

#include <stdio.h>

int main() {
    char ch;

    printf("Enter any single character: ");
    scanf(" %c", &ch);

    printf("\n--- ASCII Details ---\n");
    printf("Character entered : %c\n", ch);
    printf("ASCII integer val : %d\n", ch);
    printf("Previous char     : %c (ASCII: %d)\n", ch - 1, ch - 1);
    printf("Next char         : %c (ASCII: %d)\n", ch + 1, ch + 1);

    return 0;
}
