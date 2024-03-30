#include<stdio.h>

int main()
{
    int marks;
    printf("Enter the Marks : ");
    scanf("%d",&marks);

    if(marks >= 50)
    {
        printf("Congratulations! You have passed the exam");
    }
    else
    {
        printf("Sorry! You failed the exam better luck next time");
    }
}