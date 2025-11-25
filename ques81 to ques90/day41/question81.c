/*
Q81: Count characters in a string without using built-in length functions.

Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
(space)
Output 2:
1
*/

#include <stdio.h>

int main() {
    char str[1000];
    
    // Read input string including spaces using fgets
    fgets(str, sizeof(str), stdin);

    int count = 0;
    while (str[count] != '\0' && str[count] != '\n') {
        count++;
    }

    printf("%d\n", count);

    return 0;
}

