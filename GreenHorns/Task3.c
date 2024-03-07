#include<stdio.h>

int main()
{
    int a1,a2,sumOf2,a3=180,angle3;
    printf("First Angle : ");
    scanf("%d",&a1);
    printf("Second Angle : ");
    scanf("%d",&a2);
    sumOf2 = a1 + a2;
    angle3 = a3 - sumOf2;
    printf("Third Angle = %d",angle3);
}