#include<stdio.h>

int main()
{
    int i=0,a;
    printf("Enter any Number : ");
    scanf("%d",&a);

    while (i<=a)
    {
        if (a%2!=0)
        {
            printf("%d\n",a);
        }
        a--;
    }
}