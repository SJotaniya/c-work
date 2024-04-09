#include<stdio.h>

void calculateSquare(int n)
{
    printf("Square of %d = %d",n,n*n);
}

int main()
{
    int a;
    printf("Enter any number for Square : ");
    scanf("%d",&a);

    calculateSquare(a);
}