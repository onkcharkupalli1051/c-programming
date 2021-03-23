#include <iostream>
using namespace std;

void sort012(int a[], int arr_size)
{
    int lo = 0, mid = 0, hi = arr_size-1;

    while(mid <= hi)
    {
        switch(a[mid])
        {
            case 0:
                swap(a[lo++],a[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(a[mid],a[hi--]);
                break;
        }
    }
}

void printArray(int arr[], int arr_size)
{
    for(int i=0;i<arr_size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
	//code
	int T,N,D;
	cin>>T;
	
	while(T--)
	{
	    cin>>N>>D;
	    int *A = new int[N];
	    
	    for(int i=0;i<N;i++)
	    {
	        cin>>A[i];
	    }
	    
	    sort012(A,N);
        printArray(A,N);
    }
	return 0;
}
