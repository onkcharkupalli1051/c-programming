#include<stdio.h>

void main()
{
    int a = 10, b= 5;

    printf("a : %d, b = %d",a,b);

    a = a ^ b;
    b = b ^ a;
    a = a ^ b;

    printf("\na : %d, b = %d",a,b);
    return 0;
}
