#include<stdio.h>

int main()
{
    for (int i = 4; i >= 0 ; i--)
    {
        for (int j = i; j >= 0 ; j--)
        {
            printf(" ");
        }
    }
    
    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}