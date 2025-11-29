#include <stdio.h>

int main() {
    int arr[100];
    int n, k;
    int i, j;

    // input size, array, and k
    scanf("%d", &n);                 // e.g. 9
    for (i = 0; i < n; i++)          // e.g. 1 2 3 1 4 5 2 3 6
        scanf("%d", &arr[i]);
    scanf("%d", &k);                 // e.g. 3

    if (k <= 0 || k > n) {
        return 0;
    }

    // for each window starting at i
    for (i = 0; i <= n - k; i++) {
        int max = arr[i];

        for (j = 1; j < k; j++) {    // check next k-1 elements
            if (arr[i + j] > max)
                max = arr[i + j];
        }

        printf("%d", max);
        if (i != n - k)
            printf(" ");
    }

    printf("\n");
    return 0;
}
