#include <stdio.h>

int main() {
    int n, i, j, sum = 0;

    printf("Enter the order of matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter the matrix elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    printf("Diagonal Sum = %d\n", sum);

    return 0;
}