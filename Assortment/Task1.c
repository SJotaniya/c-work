#include<stdio.h>

int main()
{
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }

    printf("\n<-- Negative Elements in Array -->\n");

    for (int i = 0; i < 5; i++)
    {
        if(arr[i] <= 0)
        {
            printf("arr[%d] = %d\n",i,arr[i]);
        }
    }
}