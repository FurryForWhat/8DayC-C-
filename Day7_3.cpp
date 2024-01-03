#include <iostream>
using namespace std;

class bookShop{
    public:
    void pencil(){
        cout<<"Brand: "<<pencilName;
        cout<<" total: "<<pencilNum<<endl;
    }
    void pen(){
        cout<<"Brand: "<<penName;
        cout<<" total: "<<penNum<<endl;
    }
    void book(){
        cout<<"Brand: "<<getBookName();
        cout<<" total: "<<getBookNum()<<endl;
    }
    void setBook(int num, string name){
        bookNum = num;
        bookName = name;
    }

    int getBookNum(){
        return bookNum;
    }

    string getBookName(){
        return bookName;
    }

    void setPEN(int num, string name){
        penNum = num;
        penName = name;
    }

    string getpenName(){
        return penName;
    }

    int getpenNum(){
        return penNum;
    }


    void setPencil(int num, string name){
        pencilNum = num;
        pencilName = name;
    }

    int getpencilNum(){
        return pencilNum;
    }
    
    string getpencilName(){
        return pencilName;
    }
    
    private:
    int bookNum;
    string bookName;
    int penNum;
    string penName;
    int pencilNum;
    string pencilName;
};

int main(){
     bookShop HlanTan;
    //  HlanTan.bookName= "ABC";
    //  HlanTan.bookNum= 13;

    //  HlanTan.pencilName= "2B";
    //  HlanTan.pencilNum= 12;

    // HlanTan.penName= "BOSS";
    // HlanTan.penNum= 6;

    // HlanTan.book();
    // HlanTan.pen();
    // HlanTan.pencil();
    
    HlanTan.setBook (13, "ABC");

    HlanTan.book();
    HlanTan.setPEN (6, "BOSS");

    HlanTan.pen();

    HlanTan.setPencil (12, "2B");

    HlanTan.pencil();
    


    
    return 0;
}