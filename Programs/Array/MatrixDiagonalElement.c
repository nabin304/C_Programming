/*
    Print Diagonal element of of given square matrix 3*3.
*/
#include<stdio.h>

void main()
{
    int row, col;
    int matrixA[3][3]={ { 10, 20, 30 },
                        { 40, 50, 60 },
                        { 70, 80, 90 }
                     };    
    for (col = 0; col<=2; col++)
    {
        for (row = 0; row <=2; row++)
        {
            if(col==row)
                printf("Matrix[%d][%d] = %d\n",row, col,matrixA[row][col]);
        }        
    } 
}