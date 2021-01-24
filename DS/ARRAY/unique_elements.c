#include<stdio.h>
#include<stdlib.h>

void main()
{
    int size,i,j,count=0,k=0;
    printf("Enter Size : ");
    scanf("%d",&size);
    int a[size];

    printf("\nEnter array elements : ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nDisplay of array elements : ");
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }

    int b[size];

    printf("\nDisplay of Unique array elements : ");
    for(i=0;i<size;i++)
    {
        count = 0;
        for(j=0,k=size;j<k+1;j++)
        {
            if(i != j)
            {
                if(a[i] == a[j])
                {
                    count++;
                }
            }
        }
        if(count == 0)
        {
            printf("%d ",a[i]);
        }
    }

}

