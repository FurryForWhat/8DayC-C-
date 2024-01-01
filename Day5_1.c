#include <stdio.h>

int main(){
    int result;
    printf("Press 1 to Sign-in. Press 2 to Sign-up. Press 3 to Exit: ");
    scanf("%d", &result);
    switch (result)
    {
    case 1:
        printf("Enter registered email:");
        break;
    case 2:
        printf("Enter your email:");
        break;
        printf("This is in case-2 under brake");
    case 3:
        printf("thank you!!!");
        exit(0);
    
    default:
        printf("Your press-number is wrong, Try Again!");
        break;
    }
    printf("\nThis is out of switch condition!!!");
    return 0;
}