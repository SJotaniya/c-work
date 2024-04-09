#include<stdio.h>

int fact(int b)
{
    if(b<=1)
    {
        return 1;
    }
    else
    {
        return b*fact(b-1);
    }
}

int main()
{
    int a;
    
    printf("Enter the valu :");
    scanf("%d",&a);

    printf("sum=%d\n",function(a));
}