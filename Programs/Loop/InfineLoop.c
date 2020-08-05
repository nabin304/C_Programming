/*
    Demo: Use of do while loop.
    Info: A program to add two numers given by a user. And this program will run until a user presses a 'y' key.
*/

#include <stdio.h>

void main()
{
    int x, y, sum;
    char option;
    do {
        printf("enter 2 numbers:");
        scanf("%d%d", &x, &y);
        sum=x+y;
        printf("Sum=%d", sum);

        printf("\nWould you like to continue press 'y', for exit press any key:");
        scanf(" %c", &option); // user choice
    } while (option=='y'); // if user presses 'y' then the loop will be restarted again

}
