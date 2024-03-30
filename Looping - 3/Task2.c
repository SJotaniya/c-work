#include<stdio.h>

int main()
{
    int a,sum=1;
    printf("Enter the last number for Factorial : ");
    scanf("%d",&a);
    for (int i = 1; i <= a; i++)
    {
        sum = sum * i;
    }
    printf("Factorial of all Numers = %d",sum);
}