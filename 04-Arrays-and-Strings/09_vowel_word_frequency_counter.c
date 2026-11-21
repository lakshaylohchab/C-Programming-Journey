// File: 09_vowel_word_frequency_counter.c
// Purpose: Count vowels, consonants, digits, spaces, special symbols, and words in a sentence
// Sample Input: "C Programming 2026 is awesome!"

#include <stdio.h>

int main() {
    char line[256];
    int vowels = 0, consonants = 0, digits = 0, spaces = 0, specials = 0, words = 0;
    int in_word = 0;

    printf("Enter a sentence: ");
    fgets(line, sizeof(line), stdin);

    for (int i = 0; line[i] != '\0' && line[i] != '\n'; i++) {
        char ch = line[i];

        // Track word boundaries accurately even with multiple spaces
        if (ch == ' ' || ch == '\t') {
            spaces++;
            in_word = 0;
        } else {
            if (!in_word) {
                words++;
                in_word = 1;
            }

            // Classify character
            if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
                char lower = (ch >= 'A' && ch <= 'Z') ? (ch + 32) : ch;
                if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                    vowels++;
                } else {
                    consonants++;
                }
            } else if (ch >= '0' && ch <= '9') {
                digits++;
            } else {
                specials++;
            }
        }
    }

    printf("\n--- Sentence Breakdown ---\n");
    printf("Words          : %d\n", words);
    printf("Vowels         : %d\n", vowels);
    printf("Consonants     : %d\n", consonants);
    printf("Digits         : %d\n", digits);
    printf("Spaces/Tabs    : %d\n", spaces);
    printf("Special Chars  : %d\n", specials);

    return 0;
}
