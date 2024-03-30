#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter value of A : ");
    scanf("%d",&a);
    printf("Enter value of B : ");
    scanf("%d",&b);
    
    if (b>a)
    {
        printf("A is Minimum");
    }
    else
    {
        printf("B is Minimum");
    }
}