#include <bits/stdc++.h>
using namespace std;


bool search(int matrix[][4], int n, int m, int key){
    int row=0, col=m-1;
    //Time complexity=O(n+m)
    //Cell start from 40 and key =33
    while(row<n && col>=0){
        if(matrix[row][col]==key){
            cout<<"Found at cell ("<<row<<","<<col<<")\n";
            return true;
        }else if(matrix[row][col]>key){
            //left
            col--;
        }else{
            //down
            row++;
        }
    }

    cout<<"Key not found\n";
    return false;
}

    //Time complexity=O(n+m)
    //Cell start from 32 and key =37
bool search2(int mat[][4], int n, int m, int key){
    int row=n-1, col=0;

    while(row>=0 && col<m){

        if(mat[row][col]==key){
            cout<< "Found at ("<<row<<","<<col<<")\n";
            return true;
        }else if(mat[row][col]<key){
            col++;
            
        }else{
            row--;
            
        }
    }

    cout<<"Key not found\n";
    return false;
}

int main(){
    int matrix[4][4]= {{10, 20, 30, 40},
                       {15, 25, 35, 45},  
                       {27, 29, 37, 48},
                       {32, 33, 39, 50},  
                                        };
    search(matrix,4,4,33);
    search2(matrix,4,4,37);
    return 0;
}