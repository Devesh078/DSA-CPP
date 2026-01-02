#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        
        // loop 1: print spaces
        for(int j = 1; j <= n - i; j++){
            cout << " ";
        }

        // loop 2: print stars
        for(int j = 1; j <= i; j++){
            cout << "*";
        }

        cout << endl; // move to next line
    }
}
