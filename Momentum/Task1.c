#include<stdio.h>

int main()
{
    int num;
    printf("Enter the Nuber : ");
    scanf("%d",&num);
    (num %2==0) ? printf("%d is Even Number",num) : printf("%d is Odd Number",num); 
}