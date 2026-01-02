#include <bits/stdc++.h>
using namespace std;

void printArr(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
}


int main(){
    int arr[]={4,7,8,1,99,100};
    int n = sizeof(arr)/sizeof(int);

    int start = 0;
    int end = n-1;

    while(start<end){
        //swap
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    printArr(arr,n);
}
//Space complexity: O(1)
//Time complexity: O(n)