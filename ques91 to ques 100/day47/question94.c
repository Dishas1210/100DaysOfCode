#include <stdio.h>

int main() {
    char str[200];
    char longest[200];
    int i = 0, len = 0, maxLen = 0;
    int start = 0, maxStart = 0;

    // read sentence with spaces
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            if (len == 0) start = i;   // start of a new word
            len++;
        } else {
            if (len > maxLen) {        // update longest word info
                maxLen = len;
                maxStart = start;
            }
            len = 0;
        }
        i++;
    }

    // copy longest word to array 'longest'
    for (i = 0; i < maxLen; i++) {
        longest[i] = str[maxStart + i];
    }
    longest[maxLen] = '\0';

    printf("%s\n", longest);

    return 0;
}
