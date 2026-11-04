// File: 06_character_vowel_classifier.c
// Purpose: Classify character type (Uppercase, Lowercase, Digit, Special) and check Vowel vs Consonant
// Sample Input: 'A' -> Uppercase Letter, Vowel

#include <stdio.h>

int main() {
    char ch;
    printf("Enter any single character: ");
    scanf(" %c", &ch);

    printf("\n--- Character Classification ---\n");
    if (ch >= 'A' && ch <= 'Z') {
        printf("'%c' is an Uppercase Letter.\n", ch);
        switch (ch) {
            case 'A': case 'E': case 'I': case 'O': case 'U':
                printf("It is a Vowel.\n");
                break;
            default:
                printf("It is a Consonant.\n");
        }
    } else if (ch >= 'a' && ch <= 'z') {
        printf("'%c' is a Lowercase Letter.\n", ch);
        switch (ch) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
                printf("It is a Vowel.\n");
                break;
            default:
                printf("It is a Consonant.\n");
        }
    } else if (ch >= '0' && ch <= '9') {
        printf("'%c' is a Numeric Digit.\n", ch);
    } else {
        printf("'%c' is a Special Symbol.\n", ch);
    }

    return 0;
}
