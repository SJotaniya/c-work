#include<stdio.h>

int main()
{
    int n;

    printf("Enter the size of array : ");
    scanf("%d",&n);

    int arr[n],sum=0;

    for(int i=0; i < n; i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
        sum=sum + arr[i];
    }

    printf("Sum = %d",sum);
}