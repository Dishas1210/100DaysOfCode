/*
Q80: Multiply two matrices.

Sample Test Case:
Input:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output:
58 64
139 154
*/

#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    scanf("%d %d", &r1, &c1);

    int matrix1[r1][c1];
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {  // matrix multiplication condition
        printf("Error: Matrix multiplication not possible\n");
        return 1;
    }

    int matrix2[r2][c2];
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    int product[r1][c2];

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            product[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Print product matrix
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d", product[i][j]);
            if (j < c2 - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
