#include <stdio.h>
void main()
{
    int a=11;
    int b=20;
    printf("\na=%db=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\na=%db=%d",a,b);
}