#include<stdio.h>

int main()
{
    int sum=0;
    int arr[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("arr[%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i==j)
            {
                printf("%2d",arr[i][j]);
                sum += arr[i][j];
            }
            else
            {
                printf(" ");
            }
            
        }
        printf("\n");
        
    }
    printf("%d",sum);

}