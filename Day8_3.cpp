#include <iostream>
using namespace std;

class A{
    public:
    int add(int a, int b){
        return (a+b);
    }
    void print(){
        cout<<"This is from A class"<<endl;
    }
};

class B : public A{
    public:
    int calcu(int x, int y){
        int result = add(x,y);
        return result;
    }
    void print(){
        cout<<"This is from B class"<<endl;
    }
};

int main(){
    A a;
    B b;
    int num = b.calcu(23,45);
    cout<<num;

    b.print();

    return 0;
}