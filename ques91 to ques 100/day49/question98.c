#include <stdio.h>

int main() {
    char name[100];
    int i, lastSpace = -1;

    fgets(name, sizeof(name), stdin);   // John David Doe

    // first initial
    printf("%c.", name[0]);

    // find initials after spaces and remember last space
    for (i = 1; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            lastSpace = i;
            if (name[i + 1] != '\0' && name[i + 1] != '\n')
                printf("%c.", name[i + 1]);   // middle/last initial
        }
    }

    // print space and full surname (after lastSpace)
    printf(" ");
    for (i = lastSpace + 1; name[i] != '\0' && name[i] != '\n'; i++) {
        printf("%c", name[i]);
    }

    printf("\n");
    return 0;
}
