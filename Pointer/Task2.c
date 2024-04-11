#include<stdio.h>

void max(int *x,int *y)
{
    if (*x < *y)
    {
        printf("A is Minimum");
    }
    else
    {
        printf("B is Minimum");
    }
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