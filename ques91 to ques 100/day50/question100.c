#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, k;
    int len;

    scanf("%s", str);          // input: abc
    len = strlen(str);

    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            if (!(i == len - 1 && j == len - 1))
                printf(",");   // commas between substrings
        }
    }

    printf("\n");
    return 0;
}
