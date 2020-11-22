#include<stdio.h>

int fib(int);

void main()
{
    int num, c, i=0 ;

    printf("Enter num : ");
    scanf("%d",&num);
    printf("\nFibonacci series : ");

    for(c=1; c<=num; c++)
    {
        printf("%d\t",fib(i));
        i++;
    }

    getch();
}

int fib(int num)
{
    if(num <= 1)
        return num;
    return (fib(num-1) + fib(num-2));
}
