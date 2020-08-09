#include <stdio.h>
int GetNthFibonacciNumber(int term);
void main()
{
    int term, fibonacciNumber;
    printf("Enter any fibonacci term (must be a positive number):");
    scanf("%d", &term);
    fibonacciNumber= GetNthFibonacciNumber(term);   
    printf("%d fibonacci term is %d", term, fibonacciNumber);
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

