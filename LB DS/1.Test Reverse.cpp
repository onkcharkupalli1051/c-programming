#include <iostream>
using namespace std;

int main() {
	//code
	int T,N,A;

	cin>>T;
	while(T--)
	{
	    cin>>N;
	    int *A = new int[N];

	    for(int i=0;i<N;i++)
	    {
	        cin>>A[i];
	    }

	    int start = 0;
	    int end = N-1;

	    while(start < end)
	    {
	        int temp = A[start];
	        A[start] = A[end];
	        A[end] = temp;
	        start++;
	        end--;
	    }
	    for(int i=0;i<N;i++)
	    {
	        cout<<A[i]<<" ";
	    }
	}
	return 0;
}
