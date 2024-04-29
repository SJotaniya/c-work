#include<stdio.h>

int main()
{
    int n;
    printf("Enter Size of Array : ");
    scanf("%d",&n);

    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr1[i]);
    }

    int arr2[n],j=0;
    for (int i = n-1; i >= 0; i--)
    {
        arr2[j] = arr1[i];
        j++;
    }

    printf("\n<-- Array After Reverse -->\n");

    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = %d \n",i,arr2[i]);
    }
}