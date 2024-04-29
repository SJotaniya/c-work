#include<stdio.h>

int main()
{
    int n;

    printf("Enter the size of array : ");
    scanf("%d",&n);

    int arr[n],min=0;

    for(int i=0; i < n; i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
        
    for (int  i = 0; i < n; i++)
    {
        if(arr[0]>=arr[i])
        {
            min=arr[i];
        }
    }

    printf("Minimum Number is %d",min);
}