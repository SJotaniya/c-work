#include<stdio.h>

int main()
{
    int num1,num2;
    printf("Enter the First Number : ");
    scanf("%d",&num1);
    printf("Enter the Second Number : ");
    scanf("%d",&num2);

    while (num1 <= num2)
    {
        if(num1%4 == 0)
        {
            printf("%d\n",num1);
        }
        num1++;
    }
}