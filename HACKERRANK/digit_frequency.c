#include<stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char s[1000];
    gets(s);

    int x = strlen(s);
    int i,j,count = 0;
    char r='0';

    for(i=0;i<10;i++)
    {
        count = 0;
        for(int j=0;j<x;j++)
        {
            if(s[j] == r)
            count++;
        }
        printf("%d",count);
        r++;
    }
    return 0;
}