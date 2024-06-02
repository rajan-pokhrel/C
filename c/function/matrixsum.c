#include <stdio.h>

// Forward declaration of display_matrix
void display_matrix(int r, int c, int matrix[r][c]);
void add(int r, int c, int a[r][c], int b[r][c], int R[r][c]);

void add(int r, int c, int a[r][c], int b[r][c], int R[r][c]) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            R[i][j] = a[i][j] + b[i][j];
        }
    }
}

void display_matrix(int r, int c, int matrix[r][c]) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int r, c, i, j;
    printf("Enter the number of rows and columns for the matrix: ");
    scanf("%d%d", &r, &c);
    int a[r][c], b[r][c], R[r][c];

    printf("Enter elements of matrix a:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of matrix b:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    add(r, c, a, b, R);
    printf("The sum of the two matrices is:\n");
    display_matrix(r, c, R);
    return 0;
}
