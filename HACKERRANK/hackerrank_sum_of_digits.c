#include<stdio.h>
#include<conio.h>

int main()
{
    int n,sum = 0,d;
    scanf("%d",&n);
    while(n>0)
    {
        d = n%10;
        n /= 10;
        sum += d;
    }
    printf("\n%d",sum);
    return 0;
}
