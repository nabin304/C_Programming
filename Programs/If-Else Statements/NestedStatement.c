/*  
    Demonstration: use of nested if-else statements.    
    Short Info: WAP to determine the number entered by a user is a positive even/odd number or a negative even/odd number.
    Apart from that if a number is 0 then display a message like a number is neither positive nor negative.
*/
#include <stdio.h>
void main()
{
    int number; 
    printf("Enter any integer number:");
    scanf("%d", &number); // read any integer number and assign them to number variable

    if (number > 0) // condition 1: check whether a number is positive
    {
        if (number % 2 == 0) // Condition 2: Check whether a number is even or odd
            printf("Number=%d is a positve and even", number);

        else // when odd this block is excuted
            printf("Number=%d is a positve and odd", number);
    }

    else
    {
        if (number == 0) // Condition 3: Check whether a number is 0
            printf("Number=%d is neither positive nor negative", number);

        else
        {
            if (number % 2 == 0) // Condition 4: Check whether a number is even or odd
                printf("Number=%d is a negative and even", number);

            else // when odd this block is excuted
                printf("Number=%d is a negative and odd", number);
        }
    }
}
