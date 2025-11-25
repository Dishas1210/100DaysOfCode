/*
Q84: Convert a lowercase string to uppercase without using built-in functions.

Sample Test Case:
Input:
hello
Output:
HELLO
*/

#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int i = 0;
    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            // convert lowercase to uppercase by subtracting 32
            str[i] = str[i] - ('a' - 'A');
        }
        i++;
    }

    printf("%s", str);

    return 0;
}
