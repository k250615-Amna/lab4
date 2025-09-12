#include <stdio.h>

int main(){
    int balance , withdrawal , allow;
    printf("Enter your current balance: ");
    scanf("%d" , &balance);
    printf("Enter the amount you want to withdraw: ");
    scanf("%d" , &withdrawal);
    allow = withdrawal % 500;


    if(balance>withdrawal && allow == 0 ){
        printf("Allow withdrawal");
    }
    else{
        printf("Reject withdrawal");
    }


}