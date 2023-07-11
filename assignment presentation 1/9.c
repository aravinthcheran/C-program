#include <stdio.h>

void transpose(int mat[][100], int rows, int cols) {
    int temp[100][100];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            temp[i][j] = mat[i][j];
        }
    }
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            mat[j][i] = temp[i][j];
        }
    }
}

void reverseRows(int mat[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        int start = 0;
        int end = cols - 1;

        while (start < end) {
            int temp = mat[i][start];
            mat[i][start] = mat[i][end];
            mat[i][end] = temp;

            start++;
            end--;
        }
    }
}

void rotateMatrix(int mat[][100], int rows, int cols) {
    transpose(mat, rows, cols);
    //reverseRows(mat, rows, cols);
}

int main() {
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int mat[100][100];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Original Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    rotateMatrix(mat, rows, cols);

    printf("Rotated Matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", mat[j][i]);
        }
        printf("\n");
    }

    return 0;
}
