#include<stdio.h>

int mult(n)
{
    if (n == 1)
        return 1;
    else
        return (n*mult(n-1));
}

void main()
{
    int num;

    printf("Enter no. : ");
    scanf("%d",&num);

    printf("\nMultiplication of Natural No. : %d",mult(num));
    getch();
}
