#include <stdio.h>

int main(){
    int number= 100;
    for (int a= 0; a<=100; a+=5 ){
        int result= number + a;
        int aCount;
        aCount++;
        printf("%d-%d\n",result, aCount);
        
    }
    
    return 0;
}