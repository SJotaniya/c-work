#include<stdio.h>

int main()
{
    float time,distance,velocity;
    printf("Enter Time in hrs : ");
    scanf("%f",&time);
    printf("Enter Distance in km : ");
    scanf("%f",&distance);
    velocity = distance / time;
    printf("Velocity = %.2f",velocity);
}