// File: 08_string_palindrome_and_reverse.c
// Purpose: Reverse a string using two pointers and perform a case-insensitive palindrome check
// Sample Input: "Madam" -> Reversed: "madaM" | Palindrome: YES

#include <stdio.h>

int main() {
    char str[100], rev[100];

    printf("Enter a word or phrase: ");
    fgets(str, sizeof(str), stdin);

    // Find length and strip trailing newline
    int len = 0;
    while (str[len] != '\0') {
        if (str[len] == '\n') {
            str[len] = '\0';
            break;
        }
        len++;
    }

    // Create reversed copy
    for (int i = 0; i < len; i++) {
        rev[i] = str[len - 1 - i];
    }
    rev[len] = '\0';

    // Case-insensitive palindrome check using two pointers (ignoring spaces)
    int left = 0, right = len - 1;
    int is_palindrome = 1;

    while (left < right) {
        while (left < right && str[left] == ' ') left++;
        while (left < right && str[right] == ' ') right--;

        char c1 = str[left];
        char c2 = str[right];

        // Convert uppercase letters to lowercase using ASCII offset
        if (c1 >= 'A' && c1 <= 'Z') c1 += 32;
        if (c2 >= 'A' && c2 <= 'Z') c2 += 32;

        if (c1 != c2) {
            is_palindrome = 0;
            break;
        }
        left++;
        right--;
    }

    printf("\n--- String Reversal & Palindrome Check ---\n");
    printf("Original String : %s\n", str);
    printf("Reversed String : %s\n", rev);
    printf("Palindrome?     : %s (case & space insensitive)\n",
           is_palindrome ? "YES" : "NO");

    return 0;
}
