/*
Q119: Write a program to take an integer array as input. Only one element will be repeated. 
Print the repeated element. Try to find the result in one single iteration.

Sample Test Cases:
Input 1: nums1 = [1,3,3,4] → Output 1: 3
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int nums[100];
    int count[1000] = {0};
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        if(count[nums[i]] > 0) {
            printf("%d\n", nums[i]);
            return 0;
        }
        count[nums[i]]++;
    }
    
    return 0;
}
