#include <stdio.h>

int main() {
    int arr[100];
    int n, i, j;
    int nge;   // next greater element

    scanf("%d", &n);              // size of array
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        nge = -1;
        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nge = arr[j];
                break;            // nearest greater found
            }
        }
        printf("%d", nge);
        if (i != n - 1)
            printf(", ");
    }

    printf("\n");
    return 0;
}
