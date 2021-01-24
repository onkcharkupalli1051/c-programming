#include<stdio.h>
#include<stdlib.h>

void main()
{
    int size,i,sum=0;
    printf("Enter Size : ");
    scanf("%d",&size);
    int a[size];

    printf("ENter array elements : ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Display of array elements : ");
    for(i=size-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }

    for(i=0;i<size;i++)
    {
        sum += a[i];
    }
    printf("\nSum : %d",sum);

}

