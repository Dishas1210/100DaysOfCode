#include <stdio.h>
#include <string.h>

void sortString(char s[]) {
    int i, j;
    char temp;
    int n = strlen(s);

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (s[i] > s[j]) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}

int main() {
    char s1[100], s2[100];

    scanf("%s", s1);
    scanf("%s", s2);

    if (strlen(s1) != strlen(s2)) {
        printf("Not anagrams\n");
        return 0;
    }

    sortString(s1);
    sortString(s2);

    if (strcmp(s1, s2) == 0)
        printf("Anagrams\n");
    else
        printf("Not anagrams\n");

    return 0;
}
