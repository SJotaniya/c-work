#include<stdio.h>

int main()
{
    float price,disc,amount;
    printf("Enter the original price : ");
    scanf("%f",&price);
    printf("Enter discount percentage : ");
    scanf("%f",&disc);
    amount = (price * disc) / 100;
    printf("Discount Amount = %.2f Rupees",amount);
}