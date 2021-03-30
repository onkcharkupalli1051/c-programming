//10. Min no of Jumps.cpp

#include<iostream>
#include<limits.h>
using namespace std;

// int minJumps(int arr[], int n)
// {
//     //Base Case : When source and destination are sam
//     if(n == 1)
//         return 0;

//     // Traverse through all the points
//     // reachable from arr[l]
//     // Recursively, get the minimum number
//     // of jumps needed to reach arr[h] from
//     // these reachable points
//     int res = INT_MAX;
//     for(int i=n-2; i>=0; i--)
//     {
//         if(i + arr[i] >= n-1)
//         {
//             int sub_res = minJumps(arr,i+1);
//             if(sub_res != INT_MAX)
//             {
//                 res = min(res,sub_res+1);
//             }
//         }
//     }
//     return res;
// }

//Alternate
int minJumps(int arr[], int n){
    int jumps = 0, farthest =0, currEnd = 0;

    for(int i=0; i<n-1;i++)
    {
        farthest = max(farthest, i+arr[i]);

        if(farthest >= n-1)
            return 1 + jumps;

        if(farthest == i)
            return -1;

        if(i == currEnd)
            jumps++;
            currEnd = farthest;
    }
    return jumps;
}

int main()
{
    int arr[] = { 1, 3, 6, 3, 2,
                  3, 6, 8, 9, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum number of jumps to";
    cout << " reach the end is " << minJumps(arr, n);
    return 0;
}