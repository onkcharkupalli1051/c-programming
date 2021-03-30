#include<iostream>
using namespace std;

class Solution{
    public void nextPermutation(int[] A)
    {
        if(A==null || A.length<=1) return;
        int i = A.length-2;
        while(i>=0 && A[i]>=A[i+1]) i--;
        if(i>=0)
        {
            int j = A.length-1;
            while(A[j] < A[i]) j--;
            swap(A,i,j);
        }
        reverse(A,i+1,A.length-1);
    }
    public void swap(int[] A, int i, int j)
    {
        int tmp = A[i];A[i]=A[j];A[j]=tmp;
    }
    public void reverse(int[] A,int i,int j)
    {
        while(i<j) swap(A,i++,j--);
    }

}

// 1   2   3
//     i   j


/*
    
    void nextPermutation(vector<int>& nums) {
        if(nums.size() == 0)
        {
            return;
        }
        
        int n = nums.size();
        int pt = 0;
        
        for(int i=n-1;i>=0;i--)
        {
            if(nums[i+1] < nums[i])
            {
                pt = i+1;
            }
        }
        
        
        for(int i=n-1;i>=0;i--)
        {
            if(nums[i] > nums[pt])
            {
                swap(nums[i],nums[pt]);
            }
        }
        
        reverse(nums,pt+1,n);
    }
    public: void swap(int &n1, int &n2)
    {
        n1 = n1 + n2;
        n2 = n1 - n2;
        n1 = n1 - n2;
    }
    
    public: void reverse(vector<int>nums,int i, int j)
    {
        while(i < j)
        {
            swap(nums[i++],nums[j--]);
        }
    }

*/
int main()
{
    
    
    return 0;
}

