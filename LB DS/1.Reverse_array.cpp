#include<iostream>
using namespace std;

void reverseArray(int arr[],int start, int end)
{
    while(start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int size,i;
    cout<<"Enter array size : ";
    cin>>size;

    int *arr = new int[size];

    cout<<"\nEnter array elements : ";
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    cout<<"\n1st Array Elements are : ";
    printArray(arr,size);

    reverseArray(arr,0,size-1);
    printArray(arr,size);

    return 0;
}
