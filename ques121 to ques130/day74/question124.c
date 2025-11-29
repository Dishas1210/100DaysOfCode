/*
Q124: Take two filenames from the user – a source file and a destination file. 
Copy all the content from the source file to the destination file using fgetc() and fputc().

Sample Test Cases:
Input 1: Source File: source.txt (Content: Learning C File Handling)
Output 1: File copied successfully to destination.txt
*/

#include <stdio.h>

int main() {
    char source[100], dest[100];
    
    printf("Enter source filename: ");
    scanf("%s", source);
    printf("Enter destination filename: ");
    scanf("%s", dest);
    
    FILE *src = fopen(source, "r");
    FILE *dst = fopen(dest, "w");
    
    if(src == NULL || dst == NULL) {
        printf("Error opening files!\n");
        return 1;
    }
    
    char ch;
    while((ch = fgetc(src)) != EOF) {
        fputc(ch, dst);
    }
    
    fclose(src);
    fclose(dst);
    
    printf("File copied successfully to %s\n", dest);
    
    return 0;
}
