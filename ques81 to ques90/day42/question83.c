/*
Q83: Count vowels and consonants in a string.

Sample Test Case:
Input:
hello
Output:
Vowels=2, Consonants=3
*/

#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int vowels = 0, consonants = 0;
    int i = 0;

    while (str[i] != '\0' && str[i] != '\n') {
        char ch = str[i];

        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            // Convert uppercase to lowercase for simplicity
            char lower = (ch >= 'A' && ch <= 'Z') ? (ch + 32) : ch;

            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }

        i++;
    }

    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);

    return 0;
}
