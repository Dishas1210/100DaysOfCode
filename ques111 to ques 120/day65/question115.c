/*
Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). 
The task is to determine if s and t are valid anagrams, meaning they contain the same characters 
with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

Sample Test Cases:
Input 1: s = "anagram", t = "nagaram" → Output 1: Anagram
Input 2: s = "rat", t = "car" → Output 2: Not Anagram
*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[100], t[100];
    scanf("%s", s);
    scanf("%s", t);
    
    int count[26] = {0};
    
    // Count s characters
    for(int i = 0; s[i]; i++) {
        count[s[i] - 'a']++;
    }
    
    // Decrement t characters
    for(int i = 0; t[i]; i++) {
        count[t[i] - 'a']--;
    }
    
    // Check if all zero
    int isAnagram = 1;
    for(int i = 0; i < 26; i++) {
        if(count[i] != 0) {
            isAnagram = 0;
            break;
        }
    }
    
    if(isAnagram) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }
    
    return 0;
}
