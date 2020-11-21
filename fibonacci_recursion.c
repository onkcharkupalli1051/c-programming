#include<stdio.h>

int fib(int);

void main()
{
    int num,ans;

    printf("Enter num : ");
    scanf("%d",&num);

    ans = fib(num);
    printf("\nFibonnaci : %d",ans);
    getch();
}

int fib(int num)
{
    if(num <= 1)
        return num;
    return (fib(num-1)+fib(num-2));
}
