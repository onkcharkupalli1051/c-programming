#include<stdio.h>
#include<stdlib.h>

int main()
{
    int data[] = {99,77,55,88,44,66,88,22,33};
    int n = 9;

    for(int i=0;i<n;i++)
    {
        for(int j=0; j<n;j++)
        {
            if(data[j] > data[j+1])
            {
                int temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }
        }
    }

    printf("\nSorted Array : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",data[i]);
    }
}
