#include <stdio.h>

int xFunction (int x){
    int sum= (3*x) + 2;
    return  sum;
}

int main(){
    int x=0;
    printf("Enter number: ");
    scanf("%d", &x);
    int final= xFunction(x);
    printf("%d is %d\n", x , final);

    return 0;
}