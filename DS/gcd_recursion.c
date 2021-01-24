#include<stdio.h>

int gcd(int a, int b)
{
    if(a == 0)
        return b;
    else if(b == 0)
        return a;
    else if(a == b)
        return a;

    if(a>b)
        return gcd(a-b,b);
    return gcd(a,b-a);

}

void main()
{
    int num1,num2,ans;

    printf("Enter no. to check gcd : ");
    scanf("%d%d",&num1,&num2);
    ans = gcd(num1,num2);
    printf("\n GCD of %d and %d : %d",num1,num2,ans);
    getch();
}
