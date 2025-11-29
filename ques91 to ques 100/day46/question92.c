#include <stdio.h>

int main() {
    char str[100];
    int i, j;
    int found = 0;

    scanf("%s", str);   // input: stress

    for (i = 0; str[i] != '\0'; i++) {
        for (j = i + 1; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {   // same character again
                printf("%c\n", str[i]);
                found = 1;
                break;
            }
        }
        if (found) {
            break;
        }
    }

    if (!found) {
        printf("-1\n");   // no repeating character
    }

    return 0;
}
