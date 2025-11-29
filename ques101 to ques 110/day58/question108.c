#include <stdio.h>

int main() {
    int nums[100], ans[100];
    int n, i;
    int rightProd;

    scanf("%d", &n);                 // size of array
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // prefix products: ans[i] = product of elements to the left of i
    ans[0] = 1;
    for (i = 1; i < n; i++) {
        ans[i] = ans[i - 1] * nums[i - 1];
    }

    // suffix product from right and multiply into ans
    rightProd = 1;
    for (i = n - 1; i >= 0; i--) {
        ans[i] = ans[i] * rightProd;
        rightProd *= nums[i];
    }

    // print as array format
    printf("[");
    for (i = 0; i < n; i++) {
        printf("%d", ans[i]);
        if (i != n - 1) printf(",");
    }
    printf("]\n");

    return 0;
}
