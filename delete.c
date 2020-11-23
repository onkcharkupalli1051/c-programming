#include<stdio.h>
#include<stdlib.h>

int dll()
{
    int count = 5;
    return count;
}

void main()
{
    printf("\nCount : %d",dll());
    getch();
}
