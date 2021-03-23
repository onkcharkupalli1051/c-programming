class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        min = arr[0];
        while(k--)
        {
            for(int i=l;i<=r;i++)
            {
                if(min > arr[i])
                {
                    min = arr[i];
                }
            }
        }
        cout<<min;
    }
};



//Solution: kth smallest element
#include<algorithm>
class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        sort(arr+l,arr+r+1);
        return arr[k - 1];
        
    }
};

//Kth: maximum element
