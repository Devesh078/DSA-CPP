#include <iostream>
using namespace std;

int main(){
    int n;

    do{
        cout<<"Enter a number:";
        cin>>n;
        if(n%10==0){
            continue;
        }
        cout<<"You entered: "<<n<<endl;

    }while(true);
    cout<<"You entered a number multiple of 10!";


}