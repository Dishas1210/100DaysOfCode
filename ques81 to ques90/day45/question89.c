/*
Q89: Count frequency of a given character in a string.

Sample Test Case:
Input:
programming
g
Output:
2
*/

#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    char ch;
    scanf(" %c", &ch);  // space before %c to skip any newline

    int count = 0;
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
