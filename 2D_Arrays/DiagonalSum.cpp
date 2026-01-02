#include <bits/stdc++.h>
using namespace std;

int DiagonalSum(int matrix[][4], int n){

     //Time complexity=O(n^2)
    ////for(int i=0; i<n; i++){//rows
       // for(int j=0; j<n; j++){//cols
        //    if(i==j){//primary Diagonal
        //        sum+=matrix[i][j];
        //    }else if(j==n-i-1){//Secondary Diagonal
        //        sum+=matrix[i][j];
        //    }
        //}
    //}

    //Time complexity=O(n)
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=matrix[i][i];//PD
        if(i!=n-i-1){
            sum+=matrix[i][n-i-1];//SD
        }
    }
    cout<<"Sum = "<<sum <<endl;
    return sum;
}


int main() {
    int matrix[4][4]= {{1,2,3,4},
    
                        {5,6,7,8},
                        {9,10,11,12},
                        {13,14,15,16}};

    DiagonalSum(matrix,4);
    return 0;
}