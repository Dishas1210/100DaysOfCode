#include <stdio.h>

int main() {
    int nums[100];
    int n, target;
    int i;
    int first = -1, last = -1;

    // input size, array, and target
    scanf("%d", &n);                // e.g. 6
    for (i = 0; i < n; i++)         // e.g. 5 7 7 8 8 10
        scanf("%d", &nums[i]);
    scanf("%d", &target);           // e.g. 8

    // find first and last occurrence
    for (i = 0; i < n; i++) {
        if (nums[i] == target) {
            if (first == -1)
                first = i;          // first time we see target
            last = i;               // keep updating last
        }
    }

    if (first == -1)
        printf("-1,-1\n");
    else
        printf("%d,%d\n", first, last);

    return 0;
}
