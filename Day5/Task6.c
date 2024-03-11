#include<stdio.h>

int main()
{
    int year;
    printf("Enter the Year : ");
    scanf("%d",&year);

    if(year%4 == 0)
    {
        printf("%d is a Leap Year",year);
    }
    else
    {
        printf("%d isn't Leap Year",year);
    }
}