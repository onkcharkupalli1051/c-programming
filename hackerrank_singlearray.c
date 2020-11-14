// int *arr = (int *)malloc(n * sizeof(int))

#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i,*arr,sum = 0;
    scanf("%d",&n);
    arr = (int*)malloc(n * sizeof(int));
    for(i = 0; i < n;i++)
        scanf("%d",arr + i);
    for(i=0;i<n;i++)
        sum += *(arr + i);
    printf("\nSum : %d",sum);
    free(arr);
    return 0;
}
