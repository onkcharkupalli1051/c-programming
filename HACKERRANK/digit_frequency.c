#include<stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int num,i;
    scanf("%d",&num);

    char str[1000];

    for(i=0;i<num;i++)
    {
        scanf("%c",&str[i]);
    }
    
    printf("\n");
    for(i=0;i<num;i++)
    {
        printf("%c ",str[i]);
    }
    return 0;
}