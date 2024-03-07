#include<stdio.h>

int main()
{
    float a,b,c,d;
    printf("Enter Value of A : ");
    scanf("%f",&a);
    printf("Enter Value of B : ");
    scanf("%f",&b);
    printf("Enter Value of C : ");
    scanf("%f",&c);
    d=(a+b+c)/3;
    printf("Average = %.2f",d);
}