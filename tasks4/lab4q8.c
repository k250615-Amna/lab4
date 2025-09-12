#include <stdio.h>

int main(){
    float temp;
    printf("What is the temperature in celsius: ");
    scanf("%f" , &temp);
    if(temp > 30){
        printf("Hot Day");
    }
    else{
        printf("Pleasant Day");
    }
}