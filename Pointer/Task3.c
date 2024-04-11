#include<stdio.h>

void max(int *x,int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;

    printf("Value of A = %d\n",*x);
    printf("Value of B = %d",*y);
}

int main()
{
    int a,b;
    printf("Enter value of A : ");
    scanf("%d",&a);
    printf("Enter value of B : ");
    scanf("%d",&b);

    max(&a,&b);
}