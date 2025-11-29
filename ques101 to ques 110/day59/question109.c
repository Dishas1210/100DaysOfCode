#include <stdio.h>

int main() {
    int arr[100];
    int n, k;
    int i;
    int windowSum = 0, maxSum;

    // input size, array, and k
    scanf("%d", &n);                    // e.g. 4
    for (i = 0; i < n; i++)             // e.g. 100 200 300 400
        scanf("%d", &arr[i]);
    scanf("%d", &k);                    // e.g. 2

    if (k > n || k <= 0) {
        printf("0\n");
        return 0;
    }

    // sum of first window
    for (i = 0; i < k; i++)
        windowSum += arr[i];

    maxSum = windowSum;

    // slide window
    for (i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];
        if (windowSum > maxSum)
            maxSum = windowSum;
    }

    printf("%d\n", maxSum);
    return 0;
}
