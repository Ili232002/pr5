#include <stdio.h>
#include <stdlib.h>
#include "func_prot.h"

void outMatrix(int **, int, int);

void func(void) {
    int matrixRow = 9, matrixColumn = 8, p = 0, m1 = 0, i=0,j=0, m=0;
    int **ptrMatrix = (int **) malloc(matrixRow * sizeof(int *));

    puts("Filling matrix with random numbers:");
    for (i = 0; i < matrixRow; ++i) {
        ptrMatrix[i] = (int *) malloc(matrixColumn * sizeof(int));
    }
    for (i = 0; i < matrixRow; ++i) {
        for (j = 0; j < matrixColumn; ++j) {
            ptrMatrix[i][j] = rand() % 101 - 50;
        }
    }
    p = ptrMatrix[0][0];
    outMatrix(ptrMatrix, matrixRow, matrixColumn);

    puts("\n\nThe execution of the task:\n");
    for (i = 0; i < matrixRow; ++i) {
        for (j = 0; j < matrixColumn; ++j) {
            if (ptrMatrix[i][j] > p) {
                p = ptrMatrix[i][j];
                m = i;
                m1 = j;
            }
        }
    }
    ptrMatrix[m][m1] *= -1;
    outMatrix(ptrMatrix, matrixRow, matrixColumn);
}

void outMatrix(int **matrix, int matrix_row, int matrix_column) {
    int i,j;
    for (i = 0; i < matrix_row; ++i) {
        for (j = 0; j < matrix_column; ++j) {
            printf("%d  ", matrix[i][j]);
        }
        puts("\n");
    }
}
