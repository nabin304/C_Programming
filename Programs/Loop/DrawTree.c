/*
    Demo: Nested for loop.
    Info: Draw a tree of dynamic height.
*/
#include <stdio.h>
void main()
{
    int treeHeight, row, star, space;
    printf("Entter the height of the desire tree:");
    scanf("%d", &treeHeight);

    for (row = 1; row <= treeHeight; row++)  // loop for tree hieght
    {
        for (space=1;space<= treeHeight-row;space++)    // insert space for each row   
            printf(" ");

        for (star = 1; star <= 2 * row - 1; star++)   // insert * for each row    
            printf("*");

        printf("\n"); // cursor move to newline after drawing a first row of the tree
    }
}

