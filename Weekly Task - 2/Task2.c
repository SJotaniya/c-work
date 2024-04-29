#include<stdio.h>
#include<math.h>

int main()
{
    float principal,rate,time,amount,ci;
        
    printf("Enter the amount :- ");
    scanf("%f",&principal);
    
    printf("Enter the interest rate :- ");
    scanf("%f",&rate);
    
    printf("Enter the time period in years :- ");
    scanf("%f",&time);
    
    amount = principal * (( pow(( 1 + rate / 100 ), time )));
    ci = amount - principal; 

    printf("*-----*-----*-----*-----*-----*\n");

    printf("Total Compound Interest = %.2f\n",ci);
    printf("Total Amount with Interest = %.2f",amount);
}