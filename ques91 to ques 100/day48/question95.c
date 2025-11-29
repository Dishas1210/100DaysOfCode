#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    char temp[200];

    // input strings, e.g.
    // abcde
    // deabc
    scanf("%s", s1);
    scanf("%s", s2);

    // if lengths differ, cannot be rotation
    if (strlen(s1) != strlen(s2)) {
        printf("Not rotation\n");
        return 0;
    }

    // make temp = s1 + s1
    strcpy(temp, s1);
    strcat(temp, s1);

    // check if s2 is substring of temp
    if (strstr(temp, s2) != NULL)
        printf("Rotation\n");
    else
        printf("Not rotation\n");

    return 0;
}
