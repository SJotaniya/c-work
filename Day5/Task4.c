#include<stdio.h>

int main()
{
    int age;
    printf("Enter your age : ");
    scanf("%d",&age);
    
    if (age > 18)
    {
        printf("You can vote");
    }
    else if (age == 18)
    {
        printf("You can also vote");
    }
    else
    {
        printf("You can't vote");
    }
}