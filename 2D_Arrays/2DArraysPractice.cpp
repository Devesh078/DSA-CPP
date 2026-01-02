//Question1:Print the number of all 7’s that are in the 2d array.Example:Input-int arr[][]={{4,7,8},{8,8,7}};n=2,m=3

#include <bits/stdc++.h>
using namespace std;

int count7(int arr[][3], int n, int m){
    int countof7=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]==7){
                countof7++;
            }
        }
    }
    return countof7;
}


int SecondRowSum(int nums[][3], int n, int m){

    int sum=0;
        for(int j=0; j<m; j++){//columns
            sum+=nums[1][j];
        }
    
    return sum;
}

int main(){
    int arr[][3]= {{4,7,8},{8,8,7}};
    int nums[][3]={{1,4,9},{11,4,3},{2,2,3}};
    cout<<count7(arr,2,3);
    cout<<SecondRowSum(nums,3,3);
    return 0;
}

//Print out the sum of the numbers in the second row oft he “nums” array.Example:Input-intnums[][]={{1,4,9},{11,4,3},{2,2,3}};

