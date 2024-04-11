#include<stdio.h>

int calculateSumOfSquares(int x)
{
    int sum=0;
    if (x <= 0)
    {
        printf("Please Enter Valid Value");
    }
    else
    {
        printf("<-- Even Numbers Between 1 to %d -->\n",x);
        for (int i = 1; i <= x; i++)
        {
            if(i%2 == 0)
            {
                printf("Squre of %d = %d\n",i,i*i);
                sum += (i*i);
            }
        }
    }
    return sum;
}

int main()
{
    int a;
    printf("Enter last number : ");
    scanf("%d",&a);
    
    printf("Sum of all Even Number's Square : %d",calculateSumOfSquares(a));
}