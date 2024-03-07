#include<stdio.h>

int main()
{
    float area,radius,pi;
    pi = 3.14;
    printf("Enter radius of circle : ");
    scanf("%f",&radius);
    area = pi * radius * radius;
    printf("Area of circle = %.2f",area);
}