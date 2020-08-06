/*
    Functions with no arguments but return value
*/
#include <stdio.h>
char* SayHello();       
void main()
{
    char *message=SayHello();
    printf("%s",message);
}

char* SayHello()
{
   return "Hello everyone";
}

