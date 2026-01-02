#include <bits/stdc++.h>
using namespace std;

int Get_ithBit(int num, int i){
    int bitmask = 1<<i;

    if((num & bitmask)==0){ //we can also write if(!(num & bitmask))
        return 0;
    }else{
        return 1;
    }
}

int main(){
    cout<<Get_ithBit(4,2);   
    return 0;
}