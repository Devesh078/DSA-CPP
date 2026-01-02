#include <bits/stdc++.h>
using namespace std;


int Trap(int *heights, int n){
    //leftMax
    int leftMax[200000];
    leftMax[0]=heights[0];

    for(int i=1; i<n; i++){
        leftMax[i]=max(leftMax[i-1],heights[i-1]);
    }

    //rightMax
    int rightMax[200000];
    rightMax[n-1]=heights[n-1];

    for(int i=n-2; i>=0; i--){
        rightMax[i]=max(rightMax[i+1], heights[i+1]);
    }

    //waterTrap
    int waterTrap=0;
    for(int i=0; i<n; i++){
        int currWater=min(leftMax[i],rightMax[i])-heights[i];

        if(currWater>0){
            waterTrap+=currWater;
        }
    }
    cout<<"water Trapped="<<waterTrap<<endl;
}

int main(){
    int heights[7]={4,2,0,6,3,2,5};
    int n= sizeof(heights)/sizeof(int);
    Trap(heights,n);
    return 0;
}