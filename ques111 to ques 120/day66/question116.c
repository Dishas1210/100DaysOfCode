/*
Q116: Write a program to take an integer array nums which contains only positive integers, 
and an integer target as inputs. Find two distinct indices i and j such that nums[i] + nums[j] = target.
Print the two indices separated by a space. If no solution, print "-1 -1".

Sample Test Cases:
Input 1: nums = [2,7,11,15], target = 9 → Output 1: 0 1
Input 2: nums = [3,2,4], target = 6 → Output 2: 1 2
Input 3: nums = [3,3], target = 6 → Output 3: 0 1
*/

#include <stdio.h>

int main() {
    int n, target;
    scanf("%d %d", &n, &target);
    
    int nums[100];
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    // Check every pair
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                return 0;
            }
        }
    }
    
    printf("-1 -1\n");
    return 0;
}
