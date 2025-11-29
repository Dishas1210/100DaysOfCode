/*
Q114: Write a program to take a string s as input. 
The task is to find the length of the longest substring without repeating characters. 
Print the length as output.

Sample Test Cases:
Input 1: s = "abcabcbb" → Output 1: 3
Input 2: s = "bbbbb" → Output 2: 1
Input 3: s = "pwwkew" → Output 3: 3
*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    scanf("%s", s);
    
    int max = 0;
    int count = 0;
    
    for(int i = 0; i < strlen(s); i++) {
        int seen = 0;
        count = 0;
        
        for(int j = i; j < strlen(s); j++) {
            for(int k = i; k < j; k++) {
                if(s[k] == s[j]) {
                    seen = 1;
                    break;
                }
            }
            if(seen) break;
            count++;
        }
        if(count > max) max = count;
    }
    
    printf("%d\n", max);
    return 0;
}
