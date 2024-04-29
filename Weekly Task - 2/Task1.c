#include<stdio.h>

int main()
{
    int a,sum=0;

    printf("Enter the last number for sum :- ");
    scanf("%d",&a);

    if (a > 0)
    {
        for(int i=0; i <= a; i++)
        {
            sum=sum+i;
        }
    }
    else
    {
        printf("Enter Postive Value");
    }
    printf("Sum of first %d positive numbers = %d",a,sum);
}