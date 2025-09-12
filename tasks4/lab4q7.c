#include <stdio.h>
#include <string.h>

int main(){
    char password[10];
    printf("Enter the password: ");
    scanf("%s" , &password);
    if(strcmp(password, "1234") == 0){
        printf("Access Granted");
    }
    else{
        printf("Access Denied");
    }
}