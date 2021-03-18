#include<iostream>
using namespace std;

int main()
{
    int n,i=0,count=0;
    cout<<"Enter array size : ";
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

    int *a2 = new int[n];
    for(i=0;i<n;i++)
    {
        a2[i] = arr[i];
    }

    for(i=0;i<n;i++)
    {
        int ele = arr[i];
        int flag = 0;
        for(int j=i+1; j<n;j++)
        {
            if(ele == a2[j])
            {
                flag = 1;
                a2[j] = 0;
            }
        }
        if(flag == 1)
        {
            count++;
        }
    }

    cout<<"\nDuplicate elements : "<<count;
    return 0;
}