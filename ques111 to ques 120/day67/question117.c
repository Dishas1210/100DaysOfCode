/*
Q117: Write a program to take two sorted arrays of size m and n as input. 
Merge both the arrays such that the merged array is also sorted. Print the merged array.

Sample Test Cases:
Input 1: nums1 = [2,7,11,15] nums2 = [4,8,10] → Output 1: 2 4 7 8 10 11 15
*/

#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    
    int a[100], b[100];
    for(int i=0; i<m; i++) scanf("%d", &a[i]);
    for(int i=0; i<n; i++) scanf("%d", &b[i]);
    
    int i=0, j=0;
    while(i<m && j<n) {
        if(a[i] < b[j]) {
            printf("%d ", a[i++]);
        } else {
            printf("%d ", b[j++]);
        }
    }
    
    while(i<m) printf("%d ", a[i++]);
    while(j<n) printf("%d ", b[j++]);
    printf("\n");
    
    return 0;
}
