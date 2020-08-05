/*
    Demo: Nested for loop.
    Info: Draw a triangle of dynamic height. 
    The output looks like for the tree hieght = 4
             *
             * * *
             * * * * *
             *  * * * * *     
*/
#include <stdio.h>
void main()
{
    int treeHeight, row, star;
    printf("Entter the height of the desire tree:");
    scanf("%d", &treeHeight);

    for (row = 1; row <= treeHeight; row++)  // loop for tree hieght
    {    
        for (star = 1; star <= 2 * row - 1; star++)   // insert * for each row    
            printf("*");

        printf("\n"); // cursor move to newline after drawing a first row of the tree
    }
}

