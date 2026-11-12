#include <stdio.h>

#define MAX 10

// Helper function to enter the elements or input a matrix
void inputMatrix(int mat[MAX][MAX], int rows, int cols, char name) {
    printf("\nEnter elements of Matrix %c (%dx%d):\n", name, rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%c[%d][%d]: ", name, i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }
}

// Helper function to display a matrix using print statement
void printMatrix(int mat[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[MAX][MAX], B[MAX][MAX], result[MAX][MAX];
    int r1, c1, r2, c2;
    char op;

    printf("=== C MATRIX CALCULATOR ===\n");
    printf("Choose an arithmetic operator (+, -, *): ");
    scanf(" %c", &op);

    // Input dimensions for Matrix A and B
    printf("\nEnter rows and columns for Matrix A (max 10): ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns for Matrix B (max 10): ");
    scanf("%d %d", &r2, &c2);

    switch (op) {
        case '+':
            if (r1 != r2 || c1 != c2) {
                printf("\nError: Matrices must have the same dimensions for addition!\n");
                return 1;
            }
            inputMatrix(A, r1, c1, 'A');
            inputMatrix(B, r2, c2, 'B');

            for (int i = 0; i < r1; i++) {
                for (int j = 0; j < c1; j++) {
                    result[i][j] = A[i][j] + B[i][j];
                }
            }
            printf("\nResult (A + B):\n");
            printMatrix(result, r1, c1);
            break;

        case '-':
            if (r1 != r2 || c1 != c2) {
                printf("\nError: Matrices must have the same dimensions for subtraction!\n");
                return 1;
            }
            inputMatrix(A, r1, c1, 'A');
            inputMatrix(B, r2, c2, 'B');

            for (int i = 0; i < r1; i++) {
                for (int j = 0; j < c1; j++) {
                    result[i][j] = A[i][j] - B[i][j];
                }
            }
            printf("\nResult (A - B):\n");
            printMatrix(result, r1, c1);
            break;

        case '*':
            if (c1 != r2) {
                printf("\nError: Columns of Matrix A must equal Rows of Matrix B for multiplication!\n");
                return 1;
            }
            inputMatrix(A, r1, c1, 'A');
            inputMatrix(B, r2, c2, 'B');

            // Initialize result matrix to 0 before multiplying
            for (int i = 0; i < r1; i++) {
                for (int j = 0; j < c2; j++) {
                    result[i][j] = 0;
                    for (int k = 0; k < c1; k++) {
                        result[i][j] += A[i][k] * B[k][j];
                    }
                }
            }
            printf("\nResult (A * B):\n");
            printMatrix(result, r1, c2);
            break;

        default:
            printf("\nInvalid operator! Please restart and enter +, -, or *.\n");
            break;
    }

    return 0;
}
