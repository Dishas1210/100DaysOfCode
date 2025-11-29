/*
Q140: Define a struct with enum Gender and print person's gender.

Sample Test Cases:
Input 1: Gender=MALE → Output 1: Male
*/

#include <stdio.h>

enum Gender {MALE, FEMALE};

struct Person {
    enum Gender gender;
};

int main() {
    int x;
    scanf("%d", &x);  // 0=MALE, 1=FEMALE
    
    struct Person p;
    p.gender = x;
    
    if(p.gender == MALE) printf("Male\n");
    else printf("Female\n");
    
    return 0;
}
