/*
Q122: Write a C program that opens an existing file (e.g., info.txt) and reads its contents 
using fgets(). The program should print all the lines to the console until EOF is reached.

Sample Test Cases:
Input 1: File: info.txt (Content: Name: Rahul\nAge: 23)
Output 1: Name: Rahul
Age: 23
*/

#include <stdio.h>

int main() {
    FILE *file = fopen("info.txt", "r");
    
    if(file != NULL) {
        char line[1000];
        while(fgets(line, sizeof(line), file)) {
            printf("%s", line);
        }
        fclose(file);
    } else {
        printf("File not found!\n");
    }
    
    return 0;
}
