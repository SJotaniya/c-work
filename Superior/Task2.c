#include<stdio.h>

int main()
{
    int n;

    printf("Enter the size of array : ");
    scanf("%d",&n);

    int arr[n],max=0;

    for(int i=0; i < n; i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }

    for (int  i = 0; i < n; i++)
    {
        if(arr[0]<arr[i])
        {
            max=arr[i];
        }
    }

    printf("Maximum Number is %d",max);
}