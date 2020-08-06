/*
    A simple function to add two integer numbers and return the sum of the given 2 numbers.
*/
#include <stdio.h>
int AddNumber(int a, int b);  // 1. function declaration

void main()
{
    int a, b, sum;
    printf("Enter 2 numbers:");
    scanf("%d%d", &a, &b);
    sum=AddNumber(a, b);  // 3. fucntion call
    printf("Total sum: %d+%d=%d", a,b,sum);
}

int AddNumber(int a, int b)  //2.  fucntion definition 
{
    int sum;
    sum=a+b;
    return sum;
}

