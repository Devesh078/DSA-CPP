//BRUTE FORCE APPROACH //Time complexity = O(n^3) 

#include <bits/stdc++.h>
using namespace std;

void maxSubarraySum(int *arr, int n){
    int maxSum = INT16_MIN;

    for(int start=0; start<n; start++){
        for(int end=start; end<n; end++){
            int currsum = 0;
            for(int i=start; i<=end; i++){
                currsum+=arr[i];
            }
            cout<<currsum <<",";
            maxSum = max(maxSum,currsum);
        }

        cout<<endl;
    }

    cout<<"Maximum subarray sum = "<<maxSum<<endl;
}
//OPTIMIZED APPROACH Time complexity=O(n^2)

void maxSubarraySum2(int *arr, int n){
    int maxSum = INT16_MIN;


    for(int start=0; start<n; start++){
        int currSum=0;
        for(int end=start; end<n; end++){
            currSum+=arr[end];
            maxSum = max(maxSum,currSum);
        }
    }

    cout<<"Maximum subarray sum = "<<maxSum<<endl;
}


int main(){
    int arr[6] = {2,-3,6,-5,4,2};
    int n = 6;
    //maxSubarraySum(arr,n);
    maxSubarraySum2(arr,n);
}



