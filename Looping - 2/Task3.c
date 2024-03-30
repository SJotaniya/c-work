// Program to print even numbers from 1 to N using a do-while loop

#include<stdio.h>

int main()
{
    int num,i=2;
    printf("Enter the Number : ");
    scanf("%d",&num);
    
    do
    {
        if (i%2==0)
        {
            printf("%d\n",i);
        }
        i++;
    } while (i<=num);
}