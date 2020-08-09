/*
    A prgram to check the number entered by user is a Prime number or not.
*/
#include <stdio.h>
void CheckPrime(int n);   // prototype
void main()
{
    int n;
    printf("Enter any positive integer number:");
    scanf("%d", &n);    
    CheckPrime(n);  // call
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