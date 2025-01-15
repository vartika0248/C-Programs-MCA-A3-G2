#include <stdio.h>

void setZeroes(int matrix[][4], int m, int n) {
	int i,j;
    int rowFlags[m], colFlags[n];

    for (i = 0; i < m; i++) rowFlags[i] = 0;
    for (j = 0; j < n; j++) colFlags[j] = 0;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (matrix[i][j] == 0) {
                rowFlags[i] = 1;
                colFlags[j] = 1;
            }
        }
    }
    // Set rows to zero
    for (i = 0; i < m; i++) {
        if (rowFlags[i]) {
            for (j = 0; j < n; j++) {
                matrix[i][j] = 0;
            }
        }
    }
    // Set columns to zero
    for (j = 0; j < n; j++) {
        if (colFlags[j]) {
            for (i = 0; i < m; i++) {
                matrix[i][j] = 0;
            }
        }
    }
}
void printMatrix(int matrix[][4], int m, int n) {
	int i,j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int matrix1[3][4] = {
        {1, 1, 1, 1},
        {1, 0, 1, 1},
        {1, 1, 1, 1}
    };
    int matrix2[3][4] = {
        {0, 1, 2, 0},
        {3, 4, 5, 2},
        {1, 3, 1, 5}
    };
    printf("Input Matrix 1:\n");
    printMatrix(matrix1, 3, 4);
    setZeroes(matrix1, 3, 4);
    printf("Output Matrix 1:\n");
    printMatrix(matrix1, 3, 4);
    printf("\nInput Matrix 2:\n");
    printMatrix(matrix2, 3, 4);
    setZeroes(matrix2, 3, 4);
    printf("Output Matrix 2:\n");
    printMatrix(matrix2, 3, 4);
    return 0;
}
