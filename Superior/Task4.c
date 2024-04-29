#include<stdio.h>

int main()
{
    int i,size,evencnt=0,oddcnt=0,even,odd;

    printf("Enter size of array : ");
    scanf("%d",&size);

    int a[size];

    for ( i = 0; i < size; i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&a[i]);
    }

    printf("\n<-- Even Numbers -->");

    for ( i = 0; i < size; i++)
    {
        if(a[i]%2==0)
        {
            printf("\n%d",a[i]);
            evencnt++;
        }
    }

    printf("\n<-- Odd Numbers -->");
    
    for ( i = 0; i < size; i++)
    {
        if(a[i]%2)
        {
            printf("\n%d",a[i]);
            oddcnt++;
        }
    }
    printf("\n");

    printf("\nTotal Even numbers : %d",evencnt);
    printf("\nTotal Odd numbers : %d",oddcnt);
}