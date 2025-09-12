#include <stdio.h>
int main(){
    float num1, num2, result;
    char operator;
    printf("Choose any of these operators:\n*\n/\n+\n-\n");
    scanf("%c" , &operator);
    printf("Enter number 1: ");
    scanf("%f", &num1);
    printf("Enter number 2: ");
    scanf("%f", &num2);

    switch(operator) {
        case '+' :
        result = num1 + num2;
        break;
        case '-':
        result = num1 - num2;
        break;
         case '*' :
        result = num1 * num2;
        break;
        case '/':
        result = num1 / num2;
        break;
    }
    printf("%.2f" , result);
}