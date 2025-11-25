/*
Q79: Perform diagonal traversal of a matrix.

Sample Test Case:
Input:
3 3
1 2 3
4 5 6
7 8 9
Output:
1 2 4 7 5 3 6 8 9
*/

#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int matrix[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Diagonal traversal
    for (int line = 1; line <= (n + m - 1); line++) {
        int start_col = (line <= n) ? 1 : (line - n + 1);
        int count = (line <= m) ? line : (m - start_col + 1);

        for (int j = 0; j < count; j++) {
            int row = (line <= n) ? (line - j - 1) : (n - j - 1);
            int col = start_col + j - 1;
            printf("%d ", matrix[row][col]);
        }
    }

    printf("\n");

    return 0;
}
