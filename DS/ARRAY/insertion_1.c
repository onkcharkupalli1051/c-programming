#include<stdio.h>
#include<stdlib.h>

void main()
{
    int size,pos,data,i;
    printf("Enter Size : ");
    scanf("%d",&size);
    int a[size];

    printf("ENter array elements : ");
    for(int t=0;t<size;t++)
    {
        scanf("%d",&a[t]);
    }

    printf("Display of array elements : ");
    for(int t=0;t<size;t++)
    {
        printf("%d ",a[t]);
    }

    printf("\nEnter position of element : ");
    scanf("%d",&pos);

    printf("\nEnter data to enter : ");
    scanf("%d",&data);


    for(int t=size-1;t>=pos-1;t--)
    {
        a[t+1] = a[t];
    }
    a[pos-1] = data;
    size++;
    /*
        pos
    0   1   2


    */
    printf("Display of array elements : ");
    for(int t=0;t<size;t++)
    {
        printf("%d ",a[t]);
    }

    printf("\nInsert at beginning : ");
    printf("Enter data to enter : ");
    scanf("%d",&data);

    for(i=size-1;i>=0;i--)
    {
        a[i+1] = a[i];
    }
    a[0] = data;
    size++;
    printf("Display of array elements : ");
    for(int t=0;t<size;t++)
    {
        printf("%d ",a[t]);
    }

    printf("\nInsert at End : ");
    printf("Enter data to enter : ");
    scanf("%d",&data);

    a[size] = data;
    size++;
    printf("Display of array elements : ");
    for(int t=0;t<size;t++)
    {
        printf("%d ",a[t]);
    }

}
