#include<stdio.h>
#include<stdlib.h>

void main()
{
    int size,i;
    printf("Enter Size : ");
    scanf("%d",&size);
    int a[size],c[size];

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
        c[i] = a[i];
    }
    printf("\nDisplay of copied array elements : ");
    for(i=size-1;i>=0;i--)
    {
        printf("%d ",c[i]);
    }
}
