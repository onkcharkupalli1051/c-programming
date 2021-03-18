#include<iostream>
using namespace std;

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
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

    int max=arr[0] , min = arr[0];
    for(i=1;i<size;i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
        if(min > arr[i])
        {
            min = arr[i];
        }
    }

    cout<<endl<<"Max Element : "<<max;
    cout<<endl<<"Min Element : "<<min;

    return 0;
}
