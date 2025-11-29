/*
Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

Sample Test Cases:
Input 1: ADD 10 20 → Output 1: 30
*/

#include <stdio.h>
#include <string.h>

enum Operation {ADD, SUBTRACT, MULTIPLY};

int main() {
    char op[20];
    int a, b;
    scanf("%s %d %d", op, &a, &b);
    
    int result;
    
    if(strcmp(op, "ADD") == 0) {
        result = a + b;
    } else if(strcmp(op, "SUBTRACT") == 0) {
        result = a - b;
    } else if(strcmp(op, "MULTIPLY") == 0) {
        result = a * b;
    }
    
    printf("%d\n", result);
    
    return 0;
}
