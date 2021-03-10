#include<stdio.h>
#include<stdlib.h>

void swap(float a, float b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("%f %f",a,b);
}

void swap2(float a,float b)         //  5   10
{
    a = a + b;                     //15     10
    b = a - b;                      //15     5
    a = a - b;                        //10  5
    printf("%f %f",a,b);
}

void swap3(float *a, float *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
    printf("%f %f",*a,*b);
}

// void swap4(float &a,float &b)
// {
//     a = a+b;
//     b = a-b;
//     a = a-b;
// }

int main()
{
    float n1, n2;
    printf("Enter 1st number : ");
    scanf("%f",&n1);

    printf("\nEnter 2nd number : ");
    scanf("%f",&n2);

    printf("\nSwap Approach 1 : ");
    swap(n1,n2);

    printf("\nSwap Approach 2 : ");
    swap2(n1,n2);

    printf("\nSwap Approach 3 : ");
    swap3(&n1,&n2);

    // printf("\nSwap Approach 4 : ");
    // swap4(n1,n2);
    // printf("%f %f",n1,n2);
    return 0;
}
