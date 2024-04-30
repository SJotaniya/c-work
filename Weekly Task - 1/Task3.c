#include<stdio.h>

int main()
{
    int a,b,c;

    printf("Enter First Number :");
    scanf("%d",&a);

    printf("Enter Second Number :");
    scanf("%d",&b);

    printf("Enter Third Number :");
    scanf("%d",&c);

    if(a>b)
    {
        if(a>c)
        {
            printf("A is Maximum");
        }
        else
        {
            printf("C is Maximum");
        }
    }
    else
    {
        if(b>c)
        {
            printf("B is Maximum");
        }
        else
        {
            printf("C is Maximum");
        }   
    } 
}