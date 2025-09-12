#include <stdio.h>

int main(){
    float price, discount;
    printf("Enter your bill amount: ");
    scanf("%f" , &price);
    if(price > 5000 ==1){
        discount = price*0.10;
        price = price-discount;
        printf("Your payable amount after discount is: %.2f " , price);
    }else{
        printf("Your payable amount is: %.2f " , price);
    }
}