/*
    Demonstration: use of if-else statements.
    Short Info: WAP to find the largest among 3 numbers given by a user.
*/
#include <stdio.h>
void main()
{
    int a, b, c;  // declare 3 variables
    printf("Enter 3 numbers:");
    scanf("%d%d%d", &a, &b, &c); // read 3 numbers and assign them to a, b, and c respectively

    if (a > b && a > c)   // condition 1: 'a' might be the largest number
    {
        printf("Largent number a= %d", a);
    }

    else if (b > c) // condition 2: 'b' might be the largest number
    {
        printf("Largent number b= %d", b);
    }

    else if (c > b)  // condition 3: 'c' might be the largest number
        printf("Largent number c= %d", c);

    else  // deafult condition 4: a==b and b==c
        printf("All numbers are equal");

}
