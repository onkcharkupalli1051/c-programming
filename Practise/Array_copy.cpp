#include<iostream>
#include<array>
using namespace std;

int *a2;

int main()
{
    int n,i=0;
    cout<<"Enter size : ";
    cin>>n;

    int *arr = new int[n];
    
    for(i=0;i<n;i++)
    {
        cout<<"\nEnter element : ";
        cin>>arr[i];
    }

    cout<<"First Array Elements : ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    if(sizeof(arr)%2 == 0)
        int *a2 = new int[sizeof(arr)];
    else
        int *a2 = new int[sizeof(arr)+1];

    for(i=0;i < sizeof(a2);i++)
    {
        a2[i] = arr[i];
    }

    cout<<"\nSecond Array Elements : ";
    for(i=0;i < sizeof(a2);i++)
    {
        cout<<a2[i]<<" ";
    }
    return 0;
}