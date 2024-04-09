#include<stdio.h>

void divideNumbers(float a,float b)
{
    if (b==0)
    {
        printf("Zero is not Divisible");
    }
    else
    {
        printf("%d / %d = %.2f",a,b,a/b);
    }
}

int main()
{
    float a,b;
    printf("Enter value of A : ");
    scanf("%f",&a);
    printf("Enter value of B : ");
    scanf("%f",&b);

    divideNumbers(a,b);
}