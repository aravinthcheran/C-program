#include <stdio.h>
#include <stdlib.h>

int findLargestSquareSubmatrix(int matrix[][100], int rows, int cols) {
    int dp[100][100];
    int maxSize = 0; 
    
    for (int i = 0; i < rows; i++) {
        dp[i][0] = matrix[i][0];
        if (dp[i][0] > maxSize) {
            maxSize = dp[i][0];
        }
    }
    for (int j = 0; j < cols; j++) {
        dp[0][j] = matrix[0][j];
        if (dp[0][j] > maxSize) {
            maxSize = dp[0][j];
        }
    }
    
    for (int i = 1; i < rows; i++) {
        for (int j = 1; j < cols; j++) {
            if (matrix[i][j] == 1) {
                dp[i][j] = 1 + fmin(dp[i-1][j-1], fmin(dp[i-1][j], dp[i][j-1]));
                if (dp[i][j] > maxSize) {
                    maxSize = dp[i][j];
                }
            } else {
                dp[i][j] = 0;
            }
        }
    }
    
    return maxSize;
}

int main() {
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    
    int (*matrix)[100] = malloc(sizeof(int) * rows * cols);
    printf("Enter the elements of the matrix (0 or 1):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int largestSubmatrix = findLargestSquareSubmatrix(matrix, rows, cols);
    
    printf("Size of the largest square submatrix: %d\n", largestSubmatrix);
    
    free(matrix);
    
    return 0;
}
