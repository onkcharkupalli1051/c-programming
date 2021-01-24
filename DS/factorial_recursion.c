#include<stdio.h>

int factorial(int);

void main()
{
    int num, fact;
    printf("Enter a number : ");
    scanf("%d",&num);

    if(num <= 0)
    {
        printf("\nEnter a positive Number");
    }
    else
        fact = factorial(num);
        printf("\nFactorial of %d : %d",num,fact);

    getch();
}

int factorial(int num)
{
    if(num >= 1)
        return num*factorial(num-1);
    else
        return 1;
}
