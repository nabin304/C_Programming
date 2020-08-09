#include <stdio.h>

void CheckOddOrEven(int n);
int Sum(int a, int b);
void main()
{
    // int n;
    // printf("Enter any integer number:");
    // scanf("%d", &n);
    // CheckOddOrEven(3);

    int totalSum;
    totalSum= Sum(10, 11);
    printf("\n%d", totalSum);
    CheckOddOrEven(3);
}




int Sum(int a, int b)
{
    int sum;
    sum=a+b;
    return sum;
}


void CheckOddOrEven(int n)
{
    int totalSum;
    totalSum= Sum(1, 11);
    printf("\n%d", totalSum);


    if (n%2==0)
        printf("\n%d is even number", n);
    else
        printf("\n%d is odd number", n);
}
