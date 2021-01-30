#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int*)a < *(int*)b);
}

int main()
{
    int data[] = {99,55,44,77,22,33,11,66,55,77};

    qsort(data, 10, sizeof(int), compare);

    for(int i=0; i<10; i++)
        printf("%d ",data[i]);

    return 0;
}
