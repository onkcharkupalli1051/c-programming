//Kadane's Algorithm

#include<iostream>
using namespace std;

int maxSubArray(int arr[], int size)
{
    int max_so_far = 0, max_ending_here = 0;

    for(int i=0;i<size;i++)
    {
        max_ending_here = max_ending_here + arr[i];
        if(max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if(max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}

int main()
{
    int n,i;
    cout<<"Enter n : ";
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

    int max_sum = maxSubArray(arr,n);
    cout<<"\nMax Contigous Sum : "<<max_sum;

    return 0;
}
