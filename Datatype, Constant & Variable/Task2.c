#include<stdio.h>

int main()
{
    float radious,pi,c;
    printf("Enter radius of circle : ",radious);
    scanf("%f",&radious);
    pi=3.14;
    c= 2*pi*radious;
    printf("Circumface of Circle : %.2f",c);
}