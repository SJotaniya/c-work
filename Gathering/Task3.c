#include<stdio.h>

int calculateFactorial(int x)
{
    int next,first=0,second=1;
    if (x <= 0)
    {
        printf("Please Enter Valid Value");
    }
    else
    {
        printf("<-- Factorial of %d --> \n",x);
        for (int i = 0; i < x; i++)
        {
            if (i <= 1)
            {
                next = i;
            }
            else
            {
                next = first + second;
                first = second;
                second = next;
            }
        }
    }
    return next;
}

int main()
{
    int a;
    printf("Enter Number for Count Factorial : ");
    scanf("%d",&a);

    printf("Factorial of %d = %d",a,calculateFactorial(a));
}