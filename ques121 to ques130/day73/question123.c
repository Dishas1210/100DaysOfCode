/*
Q123: Read a text file and count the total number of characters, words, and lines. 
A word is defined as a sequence of non-space characters separated by spaces or newlines.

Sample Test Cases:
Input 1: File: sample.txt (Content: Hello world\nThis is C programming)
Output 1: Characters: 31\nWords: 5\nLines: 2
*/

#include <stdio.h>

int main() {
    FILE *file = fopen("sample.txt", "r");
    
    if(file == NULL) {
        printf("File not found!\n");
        return 1;
    }
    
    int chars = 0, words = 0, lines = 0;
    int in_word = 0;
    char ch;
    
    while((ch = fgetc(file)) != EOF) {
        chars++;
        
        if(ch == '\n') {
            lines++;
        }
        
        if(ch == ' ' || ch == '\n' || ch == '\t') {
            if(in_word) {
                words++;
                in_word = 0;
            }
        } else {
            in_word = 1;
        }
    }
    
    if(in_word) words++; // Last word
    
    fclose(file);
    
    printf("Characters: %d\n", chars);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);
    
    return 0;
}
