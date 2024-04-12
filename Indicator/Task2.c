#include<stdio.h>

int cube(int *p)
{
    int a = *p;

    printf("Cube of %d = %d",*p,a*a*a);
}

int main()
{
    int a;
    printf("Enter Value for Cube : ");
    scanf("%d",&a);

    cube(&a);
}