// File: 07_custom_string_functions.c
// Purpose: Implement strlen, strcpy, strcat, and strcmp manually without using <string.h>
// Sample Input: "Hello" and "World"

#include <stdio.h>

int main() {
    char str1[100], str2[100], copy[100], combined[200];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Strip trailing newline characters from fgets() manually
    int len1 = 0;
    while (str1[len1] != '\0') {
        if (str1[len1] == '\n') {
            str1[len1] = '\0';
            break;
        }
        len1++;
    }

    int len2 = 0;
    while (str2[len2] != '\0') {
        if (str2[len2] == '\n') {
            str2[len2] = '\0';
            break;
        }
        len2++;
    }

    // 1. Manual strcpy (copy str1 into copy)
    int i = 0;
    while (str1[i] != '\0') {
        copy[i] = str1[i];
        i++;
    }
    copy[i] = '\0';

    // 2. Manual strcat (str1 + " " + str2 into combined)
    int k = 0;
    for (int j = 0; str1[j] != '\0'; j++) combined[k++] = str1[j];
    combined[k++] = ' ';
    for (int j = 0; str2[j] != '\0'; j++) combined[k++] = str2[j];
    combined[k] = '\0';

    // 3. Manual strcmp (lexicographical comparison)
    int idx = 0, cmp = 0;
    while (str1[idx] != '\0' || str2[idx] != '\0') {
        if (str1[idx] != str2[idx]) {
            cmp = str1[idx] - str2[idx];
            break;
        }
        idx++;
    }

    printf("\n--- Custom String Operations ---\n");
    printf("Length of String 1 : %d\n", len1);
    printf("Length of String 2 : %d\n", len2);
    printf("Copied String 1    : %s\n", copy);
    printf("Concatenated       : %s\n", combined);

    if (cmp == 0) {
        printf("Comparison         : Both strings are EQUAL.\n");
    } else if (cmp < 0) {
        printf("Comparison         : \"%s\" comes BEFORE \"%s\" alphabetically.\n", str1, str2);
    } else {
        printf("Comparison         : \"%s\" comes AFTER \"%s\" alphabetically.\n", str1, str2);
    }

    return 0;
}
