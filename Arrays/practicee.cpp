#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;

    int num =n;
    int sumCubes = 0;
    for(int i=1; i<=n; i++){
       int a = num%10;
        sumCubes+=(a*a*a);
        num/=10;
    }
    if(n==sumCubes){
        cout<<"Number is a Armstrong number";
    }else{
        cout<<"Number is not a Armstrong number";
    }
}