#include<stdio.h>

void addNumbers(int a,int b)
{
    printf("%d + %d = %d",a,b,a+b);
}

int main()
{
    int a,b;
    printf("Enter value of A : ");
    scanf("%d",&a);
    printf("Enter value of B : ");
    scanf("%d",&b);

    addNumbers(a,b);
}