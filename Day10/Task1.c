#include<stdio.h>

int main()
{
    int a,sum = 0;
    printf("Enter the last number for Sum : ");
    scanf("%d",&a);
    for (int i = 1; i <= a; i++)
    {
        sum = sum + i;
    }
    printf("Sum of all Numbers = %d",sum);
}