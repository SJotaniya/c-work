#include<stdio.h>

int main()
{
    int a,store=1;
    printf("Enter Value : ");
    scanf("%d",&a);

    for (int i = 1; i < a; i++)
    {
        store = store * i;
    }
    
    printf("Factorial of %d = %d ",a,store);
}