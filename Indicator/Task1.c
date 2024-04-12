#include<stdio.h>

void swap(int *x, int *y, int *z)
{
    int t;

    t = *x;
    *x = *y;
    *y = *z;
    *z = t;

    printf("<-- Values After Swap --> \n");

    printf("A = %d \n",*x);
    printf("B = %d \n",*y);
    printf("C = %d \n",*z);
}

int main()
{
    int a,b,c;

    printf("Enter Value of A -> ");
    scanf("%d",&a);
    printf("Enter Value of B -> ");
    scanf("%d",&b);
    printf("Enter Value of C -> ");
    scanf("%d",&c);
    printf("\n");

    swap(&a,&b,&c);
}