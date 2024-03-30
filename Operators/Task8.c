#include<stdio.h>

int main()
{
    int a,b,c,d,e;
    printf("Enter value of A : ");
    scanf("%d",&a);
    printf("Enter value of B : ");
    scanf("%d",&b);
    printf("Enter value of C : ");
    scanf("%d",&c);
    printf("Enter value of D : ");
    scanf("%d",&d);
    e = (a+b)*(c-d);
    printf("Answer = %d",&e);
}