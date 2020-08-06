/*
    Function call by value vs call by reference example.
*/
#include<stdio.h>

void CallByValue(int x)
{
    x+=5;
}

void CallByReference(int *x)
{
    *x+=5;
}
void main()
{
    int x=10;

    CallByValue(x);  // data manipulated inside the function will not reflect outside the fucntion scope
    printf("While function call by value, x=%d\n", x);          // output will be x=10
    
    CallByReference(&x);      // data manipulated inside the function will be reflected outside the function scope
    printf("While function call by reference, x=%d", x);          //output will be x=15
}