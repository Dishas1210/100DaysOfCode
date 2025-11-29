/*
Q127: Write a program that reads text from input.txt, converts all lowercase letters 
to uppercase, and writes the result to output.txt.

Sample Test Cases:
Input 1: input.txt (Hello World\nC programming) → output.txt (HELLO WORLD\nC PROGRAMMING)
*/

#include <stdio.h>

int main() {
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");
    
    if(input == NULL || output == NULL) {
        printf("Error opening files!\n");
        return 1;
    }
    
    char ch;
    while((ch = fgetc(input)) != EOF) {
        if(ch >= 'a' && ch <= 'z') {
            ch = ch - 32;  // a-z to A-Z
        }
        fputc(ch, output);
    }
    
    fclose(input);
    fclose(output);
    printf("Conversion complete! Check output.txt\n");
    
    return 0;
}
