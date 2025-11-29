/*
Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

Sample Test Cases:
Input 1: FAILURE → Output 1: Operation failed
*/

#include <stdio.h>

enum Status {SUCCESS, FAILURE, TIMEOUT};

int main() {
    int x;
    scanf("%d", &x);  // 0=SUCCESS, 1=FAILURE, 2=TIMEOUT
    
    if(x == 0) printf("Operation successful\n");
    else if(x == 1) printf("Operation failed\n");
    else if(x == 2) printf("Operation timed out\n");
    
    return 0;
}
