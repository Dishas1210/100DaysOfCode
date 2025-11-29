#include <stdio.h>

int main() {
    int nums[100];
    int n, i;
    int total = 0, left = 0;

    // input size and array
    scanf("%d", &n);                // e.g. 6
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);      // e.g. 1 7 3 6 5 6
        total += nums[i];
    }

    for (i = 0; i < n; i++) {
        int right = total - left - nums[i];
        if (left == right) {        // pivot found
            printf("%d\n", i);
            return 0;
        }
        left += nums[i];
    }

    printf("-1\n");                 // no pivot index
    return 0;
}
