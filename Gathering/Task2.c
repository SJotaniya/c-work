#include<stdio.h>

int calculateArea(int l, int w)
{
    return l*w;
}

int main()
{
    int length,width;
    printf("Enter Length of Rectangle : ");
    scanf("%d",&length);
    printf("Enter Width of Rectangle : ");
    scanf("%d",&width);

    printf("Area of Rectangle = %d",calculateArea(length,width));
}