#include<stdio.h>

int main()
{
    float weight,height,bmi;
    printf("Enter Weight in Kg. : ");
    scanf("%f",&weight);
    printf("Enter Height in Meters : ");
    scanf("%f",&height);
    bmi = weight/(height * height);
    printf("BMI = %.2f Rupees",bmi);
}