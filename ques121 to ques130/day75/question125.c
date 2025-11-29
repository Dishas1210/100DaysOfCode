/*
Q125: Open an existing file in append mode and allow the user to enter a new line of text. 
Append the text at the end without overwriting existing content.

Sample Test Cases:
Input 1: Existing File: data.txt (Content before: Hello world)
User Input: This is appended text.
Output 1: File updated successfully with appended text.
*/

#include <stdio.h>

int main() {
    char text[1000];
    
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);
    
    FILE *file = fopen("data.txt", "a");
    
    if(file != NULL) {
        fprintf(file, "%s", text);
        fclose(file);
        printf("File updated successfully with appended text.\n");
    } else {
        printf("Error opening file!\n");
    }
    
    return 0;
}
