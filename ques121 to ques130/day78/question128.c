/*
Q128: Read a text file and count how many vowels and consonants are in the file. 
Ignore digits and special characters.

Sample Test Cases:
Input 1: File: text.txt (Content: Welcome to C language)
Output 1: Vowels: 8\nConsonants: 10
*/

#include <stdio.h>

int main() {
    FILE *f = fopen("text.txt", "r");
    int v = 0, c = 0;
    char ch;
    
    while((ch = fgetc(f)) != EOF) {
        if(ch >= 'a' && ch <= 'z') {
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                v++;
            } else {
                c++;
            }
        }
        if(ch >= 'A' && ch <= 'Z') {
            if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                v++;
            } else {
                c++;
            }
        }
    }
    
    fclose(f);
    printf("Vowels: %d\nConsonants: %d\n", v, c);
    return 0;
}

