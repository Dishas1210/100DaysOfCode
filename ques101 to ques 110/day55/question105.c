#include <stdio.h>

int main() {
    int nums[200];
    int n, i;
    int candidate = 0, count = 0;

    scanf("%d", &n);              // size of array
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // 1) Find candidate
    for (i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // 2) Verify candidate
    count = 0;
    for (i = 0; i < n; i++) {
        if (nums[i] == candidate) count++;
    }

    if (count > n / 2)
        printf("%d\n", candidate);
    else
        printf("-1\n");

    return 0;
}
