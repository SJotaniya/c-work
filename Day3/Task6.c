#include<stdio.h>

int main()
{
    int a,b,temp;
    printf("Enter value of A : ");
    scanf("%d",&a);
    printf("Enter vlaue of B : ");
    scanf("%d",&b);

    printf("Value Before Swap\n");
    printf("A = %d\n",a);
    printf("B = %d\n",b);

    a=temp;
    b=a;
    temp=b;

    printf("Value After Swap\n");
    printf("A = %d\n",a);
    printf("B = %d\n",b);
}