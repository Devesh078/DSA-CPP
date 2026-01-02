#include <bits/stdc++.h>
using namespace std;

bool arrayTwice(int *nums, int n){
    for(int i=1; i<n; i++){
        if(nums[i-1]==nums[i]){
            return true;
        }
    }
    return false;
}


int main(){
    int nums[] = {1,1,1,3,3,4,3,2,4,2};
    int n = sizeof(nums)/sizeof(int);
    cout<<arrayTwice(nums,n);
    return 0;
}