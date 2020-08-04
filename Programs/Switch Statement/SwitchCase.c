/*
    Demonstration: use of switch statement.
    Short Info: Print a day name based on the integer number entered by a user.
*/
#include <stdio.h>
void main()
{
    int day; //1-7
    printf("Enter any number between 1 to 7:");
    scanf("%d", &day);  

    switch (day)
    {
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thursday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Satruday");
        break;
    default:
        printf("Unknwon day or invalid input data");
        break;
    }    
}
