/*
    Print diagonal elements of a given square matrix 3*3.
*/
#include<stdio.h>

void main()
{
    int row;
    int matrixA[3][3]={ { 10, 20, 30 },
        { 40, 50, 60 },
        { 70, 80, 90 }
    };
    for (row = 0; row<=2; row++)
    {        
        // since diagonal element has a same index, row=col value, only one loop is sufficient to get the diagonal elements
        printf("Matrix[%d][%d] = %d\n", row, row, matrixA[row][row]);
    }
}