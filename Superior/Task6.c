#include<stdio.h>

int main()
{
    int i,size_a,size_b,ressize,j;

    printf("Enter size of first array : ");
    scanf("%d",&size_a);

    printf("Enter size of second array : ");
    scanf("%d",&size_b);

    int a[size_a];
    int b[size_b];

    printf("\n<-- Enter First Array -->\n");
    for ( i = 0; i < size_a; i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&a[i]);
    }

    printf("\n<-- Enter Secound Array -->\n");
    for ( i = 0; i < size_b; i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&b[i]);
    }
    
    ressize=size_a + size_b;
    int c[ressize];
    
    for ( i = 0; i < size_a; i++)
    {
        c[i]=a[i];
    }
    for (i = 0, j = size_a; j < ressize && i < size_b;  i++, j++) 
    {
        c[j] = b[i];
    }
    
    printf("\n<-- Merged Array -->\n");

    for (i = 0; i < ressize; i++) {
        printf("arr[%d] = %d\n", i, c[i]);
    }
}