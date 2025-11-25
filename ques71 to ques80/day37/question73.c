#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    int rowSum[rows];

    // Read matrix elements and calculate sum of each row
    for (int i = 0; i < rows; i++) {
        rowSum[i] = 0;  // initialize sum for each row
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            rowSum[i] += matrix[i][j];
        }
    }

    // Print sums of each row
    for (int i = 0; i < rows; i++) {
        printf("%d", rowSum[i]);
        if (i < rows - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
