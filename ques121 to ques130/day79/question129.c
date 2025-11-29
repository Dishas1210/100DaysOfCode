/*
Q129: A file numbers.txt contains a list of integers separated by spaces. 
Read all integers, compute their sum and average, and print both.

Sample Test Cases:
Input 1: File: numbers.txt (Content: 10 20 30 40 50)
Output 1: Sum = 150\nAverage = 30.00
*/

#include <stdio.h>

int main() {
    FILE *file = fopen("numbers.txt", "r");
    
    if(file == NULL) {
        printf("File not found!\n");
        return 1;
    }
    
    int num;
    int sum = 0;
    int count = 0;
    
    while(fscanf(file, "%d", &num) == 1) {
        sum += num;
        count++;
    }
    
    fclose(file);
    
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", (float)sum / count);
    
    return 0;
}
