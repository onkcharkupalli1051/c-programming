#include<stdio.h>
#include<stdlib.h>

void main()
{
    int size,i,j,count=0,ele,mm=1;
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

    int b[size],c[size];
    for(i=0;i<size;i++)
    {
        b[i] = a[i];
        c[i] = 0;
    }

    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(a[i] == b[j])
            {
                c[j] = mm;
                mm++;
            }
        }
        mm = 1;
    }

    for(i=0;i<size;i++)
    {
        if(c[i] == 2)
        {
            count++;
        }
    }

    printf("\nCOunt : %d",count);
}
