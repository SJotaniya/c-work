#include<stdio.h>

int main()
{
    float i,p,r,n;
    printf("Enter Principal = ");
    scanf("%f",&p);
    printf("Enter Rate of Interest = ");
    scanf("%f",&r);
    printf("Enter Time Period = ");
    scanf("%f",&n);
    i = p*r*n;
    printf("Simple Interest = %.2f",i/100);
}