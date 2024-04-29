#include<stdio.h>

int main()
{
    int i,size;

    printf("Enter size of array : ");
    scanf("%d",&size);

    int a[size];


    for ( i = 0; i < size; i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&a[i]);
    }

    for ( i = 0; i < size; i++)
    {
        printf("\n%d",a[i]);
    }

    printf("\n<-- Reversed Array -->");
    for ( i = size-1; i >= 0; i--)
    {
        printf("\n%d",a[i]);
    }
}