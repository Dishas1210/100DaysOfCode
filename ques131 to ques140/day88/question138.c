/*
Q138: Print all enum names and integer values using a loop.

Sample Test Cases:
Input 1: No input
Output 1: RED=0\nYELLOW=1\nGREEN=2
*/

#include <stdio.h>

enum Color {RED, YELLOW, GREEN};

int main() {
    enum Color colors[] = {RED, YELLOW, GREEN};
    int n = 3;
    
    for(int i = 0; i < n; i++) {
        printf("%d=%d\n", i, colors[i]);
    }
    
    return 0;
}
