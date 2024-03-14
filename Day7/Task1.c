#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the value of A : ");
    scanf("%d",&a);
    printf("Enter the value of B : ");
    scanf("%d",&b);
    printf("Enter the value of C : ");
    scanf("%d",&c);

    (a>b) ? (a>c) ? printf("A is Max") : printf("C is Max") : (b>c) ? printf("B is Max") : printf("C is Max");
}