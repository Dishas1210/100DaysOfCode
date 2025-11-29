#include <stdio.h>

int main() {
    int arr[100];
    int n, i, j;

    scanf("%d", &n);          // size of array
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        int pge = -1;         // previous greater element

        // look left side of i
        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                pge = arr[j];
                break;        // nearest greater found
            }
        }

        printf("%d", pge);
        if (i != n - 1)
            printf(", ");
    }

    printf("\n");
    return 0;
}
