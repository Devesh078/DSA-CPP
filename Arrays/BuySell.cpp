#include <bits/stdc++.h>
using namespace std;

void maxProfit(int *prices, int n){
    int bestBuy[100000];
    bestBuy[0]=INT16_MAX;
    for(int i=0; i<n; i++){             //O(n)
        bestBuy[i]=min(bestBuy[i-1],prices[i-1]);
    }

    int maxProfit=0;
    for(int i=0; i<n; i++){                     //O(n)
        int currProfit = prices[i]-bestBuy[i];
        maxProfit = max(maxProfit,currProfit);
    }
    //Time complexity = [O(n)+O(n) => O(n+n) => O(2n) => O(n)]
    //Time complexity = O(n)
    cout<<"Maximum profit = "<<maxProfit<<endl;
}


int main(){
    int prices[6]={8,4,9,3,5,6};
    int n = sizeof(prices)/sizeof(int);
    maxProfit(prices,n);
}







