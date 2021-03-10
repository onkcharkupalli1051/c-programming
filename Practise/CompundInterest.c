#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    double pA, rOI, n, t;
    double cI;

    printf("Enter Principal Amount : ");
    scanf("%lf",&pA);

    printf("\nEnter Number Of Times interest compounded : ");
    scanf("%lf",&n);

    printf("\nEnter Rate Of Interest : ");
    scanf("%lf",&rOI);

    printf("\nEnter time period : ");
    scanf("%lf",&t);

    cI = pA * pow((1 + (rOI/n)), (n*t));
    printf("\nCompound Interest : %lf",cI);
    return 0;
}