#include<stdio.h>

void calculateCube(int n)
{
    printf("Cube of %d = %d",n,n*n*n);
}

int main()
{
    int a;
    printf("Enter any number for Cube : ");
    scanf("%d",&a);

    calculateCube(a);
}