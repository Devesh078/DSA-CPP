#include <bits/stdc++.h>
using namespace std;

void print(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
}

void BubbleSort(int *arr, int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    print(arr,n);
}

int main(){
    int arr[5]={5,3,2,8,1};
    int n=sizeof(arr)/sizeof(int);
    BubbleSort(arr,n);
    return 0;
}