#include <bits/stdc++.h>
using namespace std;

bool isValidPalindrome(char str[], int n){
    int st=0, end=n-1;
        while(st<end){
            if(str[st++] != str[end--]) {
            cout<<"Not a valid Palindrome"<<endl;
            return false;
        }
    }
    cout<<" valid Palindrome"<<endl;
    return true;

}

int main(){
    char word[]= "madam";
    isValidPalindrome(word, strlen(word));
    return 0;
}