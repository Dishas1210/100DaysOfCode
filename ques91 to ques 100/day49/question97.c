#include <stdio.h>

int main() {
    char name[100];
    int i;

    fgets(name, sizeof(name), stdin);  // e.g. John Doe

    // first letter
    printf("%c", name[0]);

    // letters after spaces
    for (i = 1; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != '\0' && name[i + 1] != '\n') {
            printf(".%c", name[i + 1]);
        }
    }

    printf(".\n");
    return 0;
}
