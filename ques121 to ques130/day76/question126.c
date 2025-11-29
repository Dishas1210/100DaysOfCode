/*
Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. 
If the file pointer is NULL, print an error message; otherwise, read and display its content.

Sample Test Cases:
Input 1: Filename: sample.txt (Exists) → Output: File opened successfully. + content
Input 2: Filename: nofile.txt (Not exists) → Output: Error: File does not exist!
*/

#include <stdio.h>

int main() {
    char filename[100];
    
    printf("Enter filename: ");
    scanf("%s", filename);
    
    FILE *file = fopen(filename, "r");
    
    if(file == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }
    
    printf("File opened successfully.\n");
    
    char line[1000];
    while(fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }
    
    fclose(file);
    return 0;
}
