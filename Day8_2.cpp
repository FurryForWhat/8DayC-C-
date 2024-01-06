#include <iostream>
using namespace std;

class Animal{
    public:
    void sound(){
        cout<<"This animal has sound!!"<<endl;
    }
};

class Dog : public Animal {      //inheritance
    public:
    void sound(){
            cout<< "Dog bark!!!";   // method overloading
    }
};

class Cat : public Animal{
    public:
    void sound(){
        cout<<"Cat Mewh!!";
    }
};

int main(){
    Animal firstAnimal;
    Dog secondAnimal;
    Cat thirdAnimal;

    firstAnimal.sound();
    secondAnimal.sound();
    thirdAnimal.sound();
    return 0;
}