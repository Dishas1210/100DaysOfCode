/*
Q120: Write a program to take a string input. Change it to sentence case.

Sample Test Cases:
Input 1: str = I am trying to build logic. → Output 1: I Am Trying To Build Logic
*/

#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, 1000, stdin);
    
    for(int i = 0; str[i]; i++) {
        if(i == 0 || str[i-1] == '.') {
            printf("%c", str[i] - 32);  // Make uppercase
        } else {
            printf("%c", str[i]);
        }
    }
    
    return 0;
}
