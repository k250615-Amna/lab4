#include<stdio.h>

int main(){
    float attendance , intmarks;
    printf("Enter your attendance in percetage: ");
    scanf("%f", &attendance);
    printf("Enter your internal marks: ");
    scanf("%f", &intmarks);
    if(attendance >= 75 && intmarks >= 40){
        printf("You can appear in the exams");
    }
    else{
        printf("You can not appear in the exams");
    }
}