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
    void pencil(){
        cout<<"Brand: "<<pencilName;
        cout<<" total: "<<pencilNum<<endl;
    }
    void pen(){
        cout<<"Brand: "<<penName;
        cout<<" total: "<<penNum<<endl;
    }
    void book(){
        cout<<"Brand: "<<bookName;
        cout<<" total: "<<bookNum<<endl;
    }
};

// class Car{
//     public: //access specifier
//     string brand;
//     string color;
//     int seat;
//     double price;
//     void drive(){
//         cout<<"Driving Car!!!";
//     }
// };

int main(){
     bookShop HlanTan;
     HlanTan.bookName= "ABC";
     HlanTan.bookNum= 13;

     HlanTan.pencilName= "2B";
     HlanTan.pencilNum= 12;

    HlanTan.penName= "BOSS";
    HlanTan.penNum= 6;

    HlanTan.book();
    HlanTan.pen();
    HlanTan.pencil();
    
    


    
    return 0;
}