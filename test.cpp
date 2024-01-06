#include <iostream>
using namespace std;

class Animal{
    public:
    void sound(){
        cout<<"This animal make a sound!"<<endl;
    }
    bool haveFourLeg= true;
};

class Pig : public Animal{
    public:
    void sound(){
        cout<< "Pig makes 'wee wee' sound.\n";
    }
};

class Dog : public Animal{
    public:
    void sound(){
        cout<< "Pig makes 'woog woog' sound.\n";
    }
};

int main(){
    Animal myAnimal;
    Pig myPig;
    Dog myDog;

    myAnimal.sound();
    myPig.sound();
    myDog.sound();
    return 0;
}