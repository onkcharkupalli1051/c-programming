#include<stdio.h>
#include<conio.h>

int main()
{
    double pA, nOY, rOI;
    double sI;

    printf("Enter Principal Amount : ");
    scanf("%lf",&pA);

    printf("\nEnter Number OF Years : ");
    scanf("%lf",&nOY);

    printf("\nEnter Rate Of Interest : ");
    scanf("%lf",&rOI);

    sI = pA*nOY*rOI;
    printf("Simple Interest is : %lf Rs ",sI);
    return 0;
}