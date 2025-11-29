#include <stdio.h>

int main() {
    char str[100], res[100];
    int i = 0, j = 0;

    scanf("%s", str);   // input like: education

    while (str[i] != '\0') {
        char c = str[i];

        // skip vowels
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
            c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
            res[j] = c;
            j++;
        }
        i++;
    }
    res[j] = '\0';

    printf("%s\n", res);

    return 0;
}
