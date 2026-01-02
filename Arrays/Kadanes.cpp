//VERY VERY IMPORTANT ALGORITHM
#include <bits/stdc++.h>
using namespace std;

void KadanesAlgo(int *arr, int n){
    int maxSum= INT16_MIN;
    int currSum=0;


    for(int i=0; i<n; i++){
        
        currSum+=arr[i];
        maxSum = max(currSum,maxSum);
        if(currSum<0){
            currSum=0;
        }
    }
    cout<<"Maximum subarray sum ="<<maxSum<<endl;
}

int main(){
    int arr[6] = {4,-5,6,1,7,0};  //4,-5,6,1,7,0
    int n=sizeof(arr)/sizeof(int);
    KadanesAlgo(arr,n);
}