// File: 09_string_manipulation_with_pointers.c
// Purpose: Implement string length, string copy, and in-place string reversal using char * pointers
// Sample Input: "Pointers in C"

#include <stdio.h>

int ptr_strlen(const char *str);
void ptr_strcpy(char *dest, const char *src);
void ptr_strrev(char *str);

int main() {
    char original[100], copied[100];

    printf("Enter a string: ");
    fgets(original, sizeof(original), stdin);

    // Strip trailing newline using a pointer
    char *p = original;
    while (*p != '\0') {
        if (*p == '\n') {
            *p = '\0';
            break;
        }
        p++;
    }

    int len = ptr_strlen(original);
    ptr_strcpy(copied, original);
    ptr_strrev(copied);

    printf("\n--- Pointer String Operations ---\n");
    printf("Original String : \"%s\"\n", original);
    printf("Length          : %d characters\n", len);
    printf("Copied & Rev    : \"%s\"\n", copied);

    return 0;
}

int ptr_strlen(const char *str) {
    const char *start = str;
    while (*str != '\0') {
        str++;
    }
    return (int)(str - start); // Pointer subtraction gives exact character count
}

void ptr_strcpy(char *dest, const char *src) {
    while ((*dest++ = *src++) != '\0') {
        // Copies characters including the null terminator '\0'
    }
}

void ptr_strrev(char *str) {
    if (*str == '\0') return; // Guard against empty string

    char *left = str;
    char *right = str;

    while (*right != '\0') {
        right++;
    }
    right--; // Step back from '\0' to the last character

    while (left < right) {
        char temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }
}
