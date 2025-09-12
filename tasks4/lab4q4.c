#include <stdio.h>

int main(){
    int age;
    float salary;
    printf("Enter your salary: ");
    scanf("%f" , &salary);
    printf("Enter your age: ");
    scanf("%d" , &age);
    if(age >= 25 && salary >= 40000){
        printf("Your loan is approved");
    }
    else{
        printf("Your loan is not approved");
    }
}