#include<stdio.h>
#include<stdlib.h>

void insert_sort(int arr[],int n)
{
    int i,j,temp;

    for(i=1;i<n;i++)
    {
        temp = arr[i];
        j = i-1;

        while(j >= 0 && arr[j] > temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}

void selection_sort(int arr[], int n)
{
    int i,j,temp,low;

    for(i=0; i<n; i++)
    {
        low = arr[i];

        for(j=i+1; j<n; j++)
        {
            if(low > arr[j])
            {
                low = low + arr[j];
                arr[j] = low - arr[j];
                low = low - arr[j];
            }
        }

        arr[i] = arr[i] + low;
        low = arr[i] - low;
        arr[i] = arr[i] - low;
    }
}

void merge_sort(int arr[],int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;

        merge_sort(arr, l, m);
        merge_sort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

void merge(int arr[],int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

/*
void merge(int a[],int min,int mid,int max)
{
    int temp[max],i,l1,r1;
    l1=min;
    r1=mid+1;
    i=min;
    while(l1<=mid && r1<=max)//#1
    {
        if(a[l1]<a[r1])
        {
            temp[i]=a[l1];
            l1++;
            i++;
        }
        else
        {
        temp[i]=a[r1];
        r1++;
        i++;
        }
   }
   while(l1<=mid)
   {
    temp[i]=a[l1];
    l1++;
    i++;
   }
   while(r1<=max)
   {
    temp[i]=a[r1];
    r1++;
    i++;
   }
    for(i=min;i<=max;i++)
    a[i]=temp[i];
}
*/
void printarr(int arr[], int n)
{
    int i;

    printf("\nSORTED ARRAY : ");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
}

void main()
{
    int n,i,choice;
    printf("Enter size of array : ");
    scanf("%d",&n);

    int arr[n];
    printf("\nARRAY : ");
    for(i=0;i<n;i++)
    {
        printf("\nEnter array element : ");
        scanf("%d",&arr[i]);
    }

    printf("\nUnsorted ARRAY : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\nSorting :\n1. Insertion Sort\n2. Selection Sort\n3. Merge Sort\n4. Exit\nEnter your choice :  ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            insert_sort(arr,n);
            break;
        case 2:
            selection_sort(arr,n);
            break;
        case 3:
            merge_sort(arr,0,n-1);
            break;
        case 4:
            exit(0);
    }
    printarr(arr,n);
}


