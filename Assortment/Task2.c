#include<stdio.h>

int main()
{
    int row,col,max=0;
    printf("Enter Number of Row : ");
    scanf("%d",&row);
    printf("Enter Number of Column : ");
    scanf("%d",&col);

    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("a[%d][%d] :",i,j);
            scanf("%d",&arr[i][j]);

            if (max <= arr[i][j])
            {
                max = arr[i][j];
            }
        }
        printf("\n");
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%3d ",arr[i][j]);
        }
        printf("\n");
    }

    printf("Maximum Value in this Array : %d",max);
}