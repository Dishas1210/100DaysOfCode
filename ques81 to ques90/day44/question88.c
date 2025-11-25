/*
Q88: Replace spaces with hyphens in a string.

Sample Test Case:
Input:
hello world
Output:
hello-world
*/

#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }

    printf("%s", str);

    return 0;
}
