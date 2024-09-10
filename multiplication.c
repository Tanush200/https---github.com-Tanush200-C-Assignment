#include <stdio.h>

int main() {
    int rowsA, colsA, rowsB, colsB;

    // Input dimensions
    printf("Enter rows and columns for Matrix A: ");
    scanf("%d %d", &rowsA, &colsA);
    printf("Enter rows and columns for Matrix B: ");
    scanf("%d %d", &rowsB, &colsB);

    // Check if multiplication is possible
    if (colsA != rowsB) {
        printf("Multiplication not possible.\n");
        return 1;
    }

    int matrixA[rowsA][colsA], matrixB[rowsB][colsB], result[rowsA][colsB];

    // Input matrices
    printf("Enter elements for Matrix A:\n");
    for (int i = 0; i < rowsA; i++)
        for (int j = 0; j < colsA; j++)
            scanf("%d", &matrixA[i][j]);

    printf("Enter elements for Matrix B:\n");
    for (int i = 0; i < rowsB; i++)
        for (int j = 0; j < colsB; j++)
            scanf("%d", &matrixB[i][j]);

    // Multiply matrices
    for (int i = 0; i < rowsA; i++)
        for (int j = 0; j < colsB; j++) {
            result[i][j] = 0;
            for (int k = 0; k < colsA; k++)
                result[i][j] += matrixA[i][k] * matrixB[k][j];
        }

    // Output result
    printf("Resultant Matrix:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }

    return 0;
}