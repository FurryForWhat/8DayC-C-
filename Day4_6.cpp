#include <iostream>

int main(){
    int number;
    std::cout<< "Enter number between 65 to 90 OR 97 to 122";
    std::cin>> number;

    if (number >=65){
        if (number <= 90){
            char result= char(number);
        }else{
            if (number >= 97){
                if(number <= 122){
                    char result= char(number);
                }else{
                    std::cout<<"Wrong Number , Try again!!";
                }
            }else{
                std::cout<<"Wrong Number , Try again!!";
            }
        }
    }else{
        std::cout<<"Wrong Number , Try again!!";
    }
    return 0;
}