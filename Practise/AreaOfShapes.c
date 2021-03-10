#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    double r,l,b,h;
    int choice;

    printf("Shapes : \n1. Circle \n2. Rectangle\n3. Square\nEnter your choice(1/2/3) : ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            printf("\nEnter Radius : ");
            scanf("%lf",&r);
            printf("\nArea of circle : %lf",3.14*r*r);
            break;
        case 2:
            printf("\nEnter Length : ");
            scanf("%lf",&l);
            printf("\nEnter Breadth : ");
            scanf("%lf",&b);
            printf("\nEnter Height : ");
            scanf("%lf",&h);
            printf("\nArea Of Rectangle : %lf",l*b*h);
            break;
        case 3:
            printf("\nEnter Side of Sqaure : ");
            scanf("%lf",&l);
            printf("\nArea Of Square : %lf",l*l);
            break;
    }
    return 0;
}
