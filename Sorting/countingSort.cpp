#include <bits/stdc++.h>
using namespace std;


void print(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
}

void CountingSort(int *arr, int n){
    int freq[100000]={0};//range
    int minVal = INT16_MAX, maxVal=INT16_MIN;

    //1st step
    for(int i=0; i<n; i++){
        freq[arr[i]]++;
        minVal=min(minVal,arr[i]);
        maxVal=max(maxVal,arr[i]);
    }
    //2nd step
    for(int i=minVal,j=0; i<=maxVal; i++){
        while(freq[i]>0){
            arr[j++]=i;
            freq[i]--;
        }
    }
    print(arr,n);
}

int main(){
    int arr[8]={1,4,1,3,2,4,3,7};
    CountingSort(arr,8);
    return 0;
}