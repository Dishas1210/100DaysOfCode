/*
Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). 
Then read them using fscanf() and display each record.

Sample Test Cases:
Input 1: Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1: Name: Asha | Roll: 101 | Marks: 85\nName: Ravi | Roll: 102 | Marks: 92
*/

#include <stdio.h>

int main() {
    int n;
    printf("How many students? ");
    scanf("%d", &n);
    
    // Write to file
    FILE *write_file = fopen("students.txt", "w");
    char name[50];
    int roll, marks;
    
    for(int i = 0; i < n; i++) {
        printf("Enter name: ");
        scanf("%s", name);
        printf("Enter roll: ");
        scanf("%d", &roll);
        printf("Enter marks: ");
        scanf("%d", &marks);
        
        fprintf(write_file, "%s %d %d\n", name, roll, marks);
    }
    fclose(write_file);
    
    // Read from file
    FILE *read_file = fopen("students.txt", "r");
    printf("\nStudent Records:\n");
    
    while(fscanf(read_file, "%s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }
    
    fclose(read_file);
    return 0;
}
