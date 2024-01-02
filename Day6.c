#include <stdio.h>

void signIn();
void intro();
void signUp();
int charCounting(char toCount[20]);

int main(){

    intro();

    return 0;
}

void signIn(){      //abc@gmail.com //NCC9990
    char mail[13] = {'a','b','c','@','g','m','a','i','l','.','c','o','m'};
    char pass[7] = {'N','C','C','9','9','9','0'};
    
    char u_mail[20];
    char u_pass[20];
    int mailCount=0;
    printf("Enter your mail:");
    scanf(" %[^\n]", &u_mail[0]);
    

    printf("Enter pass:");
    scanf(" %[^\n]", &u_pass[0]);

    int u_mail_count= charCounting(u_mail);
    if( u_mail_count == 13){
        for (int i = 0; i < 13; i++){
            if( mail[i] == u_mail[i]){
                mailCount++;
            }else{
                printf("Your mail is wrong!!!");
                signIn();
            }
         }
         if (mailCount == 13){
                printf("Your mail is correct!!!!!!");
            }
    }else{
        printf("Your Email is Wrong!!!\n");
    }
}

int charCounting(char toCount[20]){ 
    int charCount = 0;
    for(int i=0; i<20 ; i++){
        if( toCount[i] == '\0'){
            break;
        } else{
            if(toCount[i] == ' '){
                printf("\nSpace error!!!!");
                break;
            }else{
                charCount++;
            }     
        }
    }
    return charCount;
}

void intro(){
    int One;
    printf("Welcome to NCC\n");
    printf("Press '1' for Sign in:\nPress '2' for Sign up:");
    scanf("%d", &One);
    switch (One)
    {
    case 1:
        signIn();
        break;
    case 2:
        signUp();
        break;
    default:
        printf("Your Pressed number is wrong , Try Again:");
        intro(); //recursive function
    }

}

void signUp(){

}