//Reverse the Number
//Entered Number : 12345
//Reversed Number : 54321

#include<stdio.h>

int main()
{
    int a;

    printf("Enter the size : ");
    scanf("%d",&a);

    for(int i=1; i <= a; i++)
    {
        printf("Enter any digits :- ");
        scanf("%d",&i);
    }
    
    for(int i=a; i >= 1; i--)
    {
        printf("Reversed number -> %d\n",i);
    }
}