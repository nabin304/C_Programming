/*
    A simple example of a Recrusive function. Which prints the "Hello" five times without any loop.
*/
#include<stdio.h>

void SayHello(int count);
void main()
{
    SayHello(5);
}

void SayHello(int count)
{  
    if(count>0)
        printf("%d Hello\n",count);

    SayHello(count-1);
}