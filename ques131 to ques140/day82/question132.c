/*
Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

Sample Test Cases:
Input 1: GREEN → Output 1: Go
*/

#include <stdio.h>

enum Light {RED, YELLOW, GREEN};

int main() {
    int x;
    scanf("%d", &x);  // 0=RED, 1=YELLOW, 2=GREEN
    
    if(x == 0) printf("Stop\n");
    else if(x == 1) printf("Wait\n");
    else if(x == 2) printf("Go\n");
    
    return 0;
}
