#include <bits/stdc++.h>
using namespace std;

void Even_odd(int num){
    if((num & 1)==0){
        cout<<"Even";
    }else{
        cout<<"odd";
    }
}

int main(){
    Even_odd(4);
    return 0;
}