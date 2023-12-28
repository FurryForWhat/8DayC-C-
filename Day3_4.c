#include <stdio.h>

int main(){
    // int a= 28;
    // a += 34;    //62
    // printf("value of a: %d\n",a);
    // a = 11;     //(overwrite) 11
    // printf("value of a: %d",a);

    int a= 2;
    int b= 4;
    int c= 5;

    // a += b;     //a= 50
    // b += c;     //b = 67
    // c += a;     //c = 94
    int result= a + b - b * c;  // operator precidence (အမြှောက်, အစား, အပေါင်း , အနှုတ်) 
    
    printf("Value of a:%d\n",a);    //50
    printf("Value of b:%d\n",b);    //67
    printf("Value of c:%d\n",c);    //71

    return 0;
}