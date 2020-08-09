#include <stdio.h>
void CheckPrime(int n);   // prototype
int GetNthFibonacciNumber(int term);
void main()
{
    int term, fibonacciNumber;
    printf("Enter any fibonacci term (must be a positive number):");
    scanf("%d", &term);
    fibonacciNumber= GetNthFibonacciNumber(term);
    CheckPrime(fibonacciNumber);  // call
}

int GetNthFibonacciNumber(int term)
{
    if(term==0)
    return 0;
    if (term==1)
        return 1;
    else
    {
        return GetNthFibonacciNumber(term-1)+GetNthFibonacciNumber(term-2);
    }
}

void CheckPrime(int n)  // def
{
    int i, flag=0; // default value 0 means n is not a prime number , if flag=1, number will be considered as a prime number.
    if (n == 1)
        printf("%d is neither prime nor composite", n);
    if (n==2)
        printf("2 is a prime number.");

    for (i = 2; i <= (n / 2); i++)
    {
        if (n % i == 0)
        {
            printf("%d is not a prime number", n);
            flag=0;
            break;
        }
        else
        {
            flag=1;
        }
    }

    if (flag==1)
        printf("%d is a prime number", n);
}