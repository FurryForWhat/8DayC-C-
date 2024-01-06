#include <iostream>
using namespace std;

class Cat{
    public:
    void set(int age, string food){
        cat_age = age;
        cat_food= food;
    }

    int getAge(){
        return cat_age;
    }

    string getFood(){
        return cat_food;
    }

    void get(){
        cout<<"Age: "<<getAge();
        cout<<"Fav-Food: "<<getFood()<<endl;
    }

    private:
    int cat_age;
    string cat_food;
};

int main(){
    Cat Shwe_Wah;
    Shwe_Wah.set(4, "Fish");

    Cat Aung_Net;
    Aung_Net.set(3,"Salamon");

    Cat Bo_Phyu;
    Bo_Phyu.set(8, "Beef");

    Shwe_Wah.get();
    Bo_Phyu.get();
    Aung_Net.get();

    return 0;
}