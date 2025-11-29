#include <stdio.h>

int main() {
    int arr[100];
    int n, x;
    int low, high, mid, ans = -1;
    int i;

    // input size, array (sorted), and x
    scanf("%d", &n);                 // e.g. 7
    for (i = 0; i < n; i++)          // e.g. 1 2 8 10 11 12 19
        scanf("%d", &arr[i]);
    scanf("%d", &x);                 // e.g. 5

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] >= x) {
            ans = mid;       // possible ceil index
            high = mid - 1;  // go left to find first ≥ x
        } else {
            low = mid + 1;   // go right
        }
    }

    if (ans == -1)
        printf("-1\n");
    else
        printf("%d\n", ans);

    return 0;
}
