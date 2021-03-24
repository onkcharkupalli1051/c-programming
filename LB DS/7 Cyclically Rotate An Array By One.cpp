#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int arr[n];

    cout<<"\nEnter array elements : ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"\n1st Array Elements are : ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i];
    }

    int first = arr[n-1];
    int count = n-2;
    while(count > -1)
    {
        arr[count+1] = arr[count];
        count--;
    }
    arr[0] = first;

    cout<<"\n2nd Array Elements are : ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i];
    }

    return 0;
}