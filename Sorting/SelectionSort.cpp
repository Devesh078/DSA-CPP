#include <bits/stdc++.h>
using namespace std;

void PrintArray(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
}

void SelectionSort(int *arr, int n){
    for(int i=0; i<n; i++){
        int smallestIdx=i;
        for(int j=i; j<n; j++){
            if(arr[j]<arr[smallestIdx]){
                smallestIdx=j;
            }
        }
        swap(arr[i],arr[smallestIdx]);
    }
    PrintArray(arr,n);
}

int main(){
    int arr[5]={5,4,1,3,2};
    int n = sizeof(arr)/sizeof(int);
   SelectionSort(arr,n);
    return 0;
}