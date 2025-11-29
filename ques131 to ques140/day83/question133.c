/*
Q133: Create an enum for months and print how many days each month has.

Sample Test Cases:
Input 1: FEB → Output 1: 28 or 29 days
*/

#include <stdio.h>
#include <string.h>

enum Month {JAN=31, FEB=28, MAR=31, APR=30, MAY=31, JUN=30, 
            JUL=31, AUG=31, SEP=30, OCT=31, NOV=30, DEC=31};

int main() {
    char month[10];
    scanf("%s", month);
    
    if(strcmp(month, "JAN") == 0) printf("31 days\n");
    else if(strcmp(month, "FEB") == 0) printf("28 or 29 days\n");
    else if(strcmp(month, "MAR") == 0) printf("31 days\n");
    else if(strcmp(month, "APR") == 0) printf("30 days\n");
    else if(strcmp(month, "MAY") == 0) printf("31 days\n");
    else if(strcmp(month, "JUN") == 0) printf("30 days\n");
    else if(strcmp(month, "JUL") == 0) printf("31 days\n");
    else if(strcmp(month, "AUG") == 0) printf("31 days\n");
    else if(strcmp(month, "SEP") == 0) printf("30 days\n");
    else if(strcmp(month, "OCT") == 0) printf("31 days\n");
    else if(strcmp(month, "NOV") == 0) printf("30 days\n");
    else if(strcmp(month, "DEC") == 0) printf("31 days\n");
    
    return 0;
}
