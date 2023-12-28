#include <stdio.h>

int main(){
    int a= 10;
    int b = a--; // 10
    int c = a--; // 9
    printf("%d\n", b);  //back-slag 
    printf("%d", c);
    return 0;
}