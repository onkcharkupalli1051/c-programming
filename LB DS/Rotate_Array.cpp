#include <iostream>
using namespace std;

int main() {
	//code
	int T,N,D;
	cin>>T;
	
	while(T--)
	{
	    cin>>N>>D;
	    int *A = new int[N];
	    int *C = new int[N];
	    
	    for(int i=0;i<N;i++)
	    {
	        cin>>A[i];
	    }
	    
	    int cc = 0;
	    for(int j=D; j<N;j++)
	    {
	        C[cc] = A[j];
	        cout<<C[cc];
	        cc++;
	    }
	    
	    for(int j=0;j<D;j++)
	    {
	        C[cc] = A[j];
	        cout<<C[cc];
	        cc++;
	    }
	    cout<<endl;
	}
	return 0;
}
