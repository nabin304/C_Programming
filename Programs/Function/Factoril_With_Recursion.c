
#include<stdio.h>

int GetFactorial(int n);

main()
{
    int n, fact;
    printf("Enter any positive integer number:");
    scanf("%d", &n);
    fact=GetFactorial(n);
    printf("Factorial of %d=%d", n, fact);   
}
int GetFactorial(int n)
{
    int fact;
    if (n==0)
        return 1;
    else
        fact=n*GetFactorial(n-1);
    return fact;
}