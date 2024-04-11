#include<stdio.h>
int main()
{
    int row,col,swap,r,c;
    printf("Enter value of row : ");
    scanf("%d",&row);
    printf("Enter value of column : ");
    scanf("%d",&col);

    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("a[%d][%d] :",i,j);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%2d",arr[i][j]);
        }
        printf("\n");
    }

    swap = row;
    row = col;
    col = swap;

    int arr1[row][col];

    printf("Row = %d Col = %d \n",row,col);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%2d",arr1[i][j]);
        }
    }
}