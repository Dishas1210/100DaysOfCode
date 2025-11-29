/*
Q121: Write a C program that creates a text file named info.txt in write mode. 
The program should take the user's name and age as input, and write them to the file 
using fprintf(). After writing, display a message confirming that the data was successfully saved.

Sample Test Cases:
Input 1: Name: Rahul, Age: 23
Output 1: File created successfully! Data written to info.txt
*/

#include <stdio.h>

int main() {
    char name[50];
    int age;
    
    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter age: ");
    scanf("%d", &age);
    
    FILE *file = fopen("info.txt", "w");
    
    if(file != NULL) {
        fprintf(file, "Name: %s\nAge: %d\n", name, age);
        fclose(file);
        printf("File created successfully! Data written to info.txt\n");
    } else {
        printf("Error creating file!\n");
    }
    
    return 0;
}
