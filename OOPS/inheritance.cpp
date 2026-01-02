#include <iostream>
#include <string.h>
using namespace std;

class Animal {
public:
    void eat(){
        cout<<"They can eat\n";
    };
    
    void breathe(){
        cout<<"They can breathe\n";
    };
};

class Bird : public Animal {
public:
    void fly(){
        cout<<"They can fly\n";
    };
};

class Mammal : public Animal {
public: 
    void walk(){
        cout<<"They can walk\n";
    }
};

class Fish : public Animal {
public:
    void swim(){
        cout<<"They can swim\n";
    };
};



int main(){
    Bird b1;
    b1.fly();
    b1.eat();
    b1.breathe();
    Mammal m1;
    m1.walk();
    m1.eat();
    Fish f1;
    f1.swim();
    return 0;
}