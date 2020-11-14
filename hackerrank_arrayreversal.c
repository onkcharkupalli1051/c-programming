#include<stdio.h>
#include<conio.h>

int main()
{
    int n,*arr,*narr,i;
    scanf("%d",&n);

    arr = (int*)malloc(n * sizeof(int));
    narr = (int*)malloc(n * sizeof(int));
    for(i=0; i<n; i++)
        scanf("%d",arr+i);
    for( i=1; i<=n; i++)
        narr[i-1] = arr[n-i];
    for(i=0;i<n;i++)
        printf("%d  ",*(narr + i));
    return 0;
}


