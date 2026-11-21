// File: 10_anagram_and_duplicate_chars.c
// Purpose: Check if two strings are anagrams using a 26-letter frequency array and list duplicate chars
// Sample Input: "Listen" and "Silent" -> Anagrams | "programming" -> Duplicates: g(2), m(2), r(2)

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int freq[26] = {0};
    int dup_count[256] = {0};

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Increment frequency for letters in str1 and track duplicates
    for (int i = 0; str1[i] != '\0' && str1[i] != '\n'; i++) {
        char ch = str1[i];
        if (ch != ' ') {
            dup_count[(unsigned char)ch]++;
        }
        if (ch >= 'A' && ch <= 'Z') ch += 32;
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
        }
    }

    // Decrement frequency for letters in str2
    for (int i = 0; str2[i] != '\0' && str2[i] != '\n'; i++) {
        char ch = str2[i];
        if (ch >= 'A' && ch <= 'Z') ch += 32;
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']--;
        }
    }

    // If all 26 frequency buckets return to 0, the strings are anagrams
    int is_anagram = 1;
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            is_anagram = 0;
            break;
        }
    }

    printf("\n--- Anagram Result ---\n");
    if (is_anagram) {
        printf("Result: The two strings ARE Anagrams (ignoring case and spaces).\n");
    } else {
        printf("Result: The two strings are NOT Anagrams.\n");
    }

    printf("\n--- Duplicate Characters in First String ---\n");
    int found_dup = 0;
    for (int i = 0; i < 256; i++) {
        if (dup_count[i] > 1) {
            printf("'%c' appears %d times\n", i, dup_count[i]);
            found_dup = 1;
        }
    }
    if (!found_dup) {
        printf("No duplicate characters found.\n");
    }

    return 0;
}
