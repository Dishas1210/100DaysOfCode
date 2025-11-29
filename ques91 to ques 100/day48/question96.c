#include <stdio.h>

void reverse(char str[], int start, int end) {
    char temp;
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    int i = 0, wordStart = -1;

    // read sentence with spaces
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            if (wordStart == -1) wordStart = i;   // start of a word
        } else {
            if (wordStart != -1) {                // end of word
                reverse(str, wordStart, i - 1);
                wordStart = -1;
            }
        }
        i++;
    }

    // handle last word if string doesn't end with space
    if (wordStart != -1) {
        reverse(str, wordStart, i - 1);
    }

    printf("%s", str);
    return 0;
}
