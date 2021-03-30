#include<iostream>
using namespace std;

//My Solution
// long long int inversionCount(long long arr[], long long N)
// {
//     int count=0,i=0;

//     for(i;i<N;i++)
//     {
//         for(int j=0;j<N;j++)
//         {
//             if(i<j && arr[i]>arr[j])
//             {
//                 cout<<"\n"<<arr[i]<<" "<<arr[j];
//                 int tmp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = tmp;

//                 count++;
//             }
//         }
//     }
//     return count;
// }
2   4   1   3   5
1   4   2   3   5

//GFG Solution
// long long int inversionCount(long long arr[], long long N)
// {
//     int count=0,i=0;

//     for(i;i<N;i++)
//     {
//         for(int j=i+1;j<N;j++)
//         {
//             if(arr[i]>arr[j])
//             {
//                 cout<<"\n"<<arr[i]<<" "<<arr[j];
//                 int tmp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = tmp;

//                 count++;
//             }
//         }
//     }
//     return count;
// }


int main()
{
    // long long int A[] = {2,4,1,3,5};
    // long long int n = inversionCount(A,5);
    // cout<<endl<<"n : "<<n;

    int arr[] = { 1, 20, 6, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = mergeSort(arr, n);
    cout << " Number of inversions are " << ans;
    
    return 0;
}
