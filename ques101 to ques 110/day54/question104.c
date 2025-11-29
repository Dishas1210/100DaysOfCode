#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int x;
    long long total;

    scanf("%d", &n);              // positive integer n

    total = (long long)n * (n + 1) / 2;   // sum 1..n

    x = (int)sqrt((double)total);        // candidate pivot

    if ((long long)x * x == total && x >= 1 && x <= n)
        printf("%d\n", x);
    else
        printf("-1\n");

    return 0;
}
