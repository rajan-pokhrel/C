#include <stdio.h>

int main() {
    int matrix[3][4];
    int i, j;

    printf("Enter the elements of the 3x4 matrix:\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe 3x4 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
