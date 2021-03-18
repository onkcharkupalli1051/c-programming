#include<iostream>
#include<array>
using namespace std;

int main()
{
    int n,i=0,sum=0;
    cout<<"Enter size : ";
    cin>>n;

    int *arr = new int[n];
    
    for(i=0;i<n;i++)
    {
        cout<<"\nEnter element : ";
        cin>>arr[i];
    }

    cout<<"Array Elements : ";
    for(i=n-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
        sum += arr[i];
    }

    cout<<"\nSum : "<<sum;
    return 0;
}