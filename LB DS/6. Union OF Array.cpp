#include<iostream>
using namespace std;

void doUnion(int arr1[], int n, int arr2[], int m)
{
    int uc = 0;
    int i=0, j=0;

    while(i<m && j<n)
    {
        if(arr1[i] < arr2[j])
        {
            cout<<arr1[i++]<<" ";
            uc++;
        }
        else if(arr1[i] > arr2[j])
        {
            cout<<arr2[j++]<<" ";
            uc++;
        }
        else
        {
            cout<<arr2[j++]<<" ";
            uc++;
        }
    }

    //Printing remaining elements of large array
    while(i< m)
    {
        cout<<arr1[i++]<<" ";
        uc++;
    }
    while(j<n)
    {
        cout<<arr2[j++]<<" ";
    }
    cout<<"|||||| "<<uc;
}

int main()
{
    int arr1[] = {1,2,4,5,6};
    int arr2[] = {2,3,5,7};

    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);

    cout<<"Union Elements : ";
    doUnion(arr1,n,arr2,m);
    cout<<"<-No. Of Union Elements : ";
    return 0;
}
