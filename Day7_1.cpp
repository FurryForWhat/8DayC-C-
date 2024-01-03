#include <iostream>
using namespace std;

class bookShop{
    public:
    int bookNum;
    string bookName;
    int penNum;
    string penName;
    int pencilNum;
    string pencilName;
};

class Car{
    public: //access specifier
    string brand;
    string color;
    int seat;
    double price;
    void drive(){
        cout<<"Driving Car!!!";
    }
};

int main(){
    // // bookShop HlanTan;
    
    Car CarOne;
    CarOne.brand= "Honda";
    CarOne.color= "grey";
    CarOne.seat = 5;
    CarOne.price= 300.35;
    cout<<"Brand: "<<CarOne.brand<<" People: "<<CarOne.seat<<" Price: "<<CarOne.price;

    Car Cartwo;
    Cartwo.brand= "Toyota";
    Cartwo.color= "black";
    Cartwo.seat = 8;
    Cartwo.price= 800;
    cout<<"\nBrand: "<<Cartwo.brand<<" People: "<<Cartwo.seat<<" Price: "<<Cartwo.price;



    return 0;
}