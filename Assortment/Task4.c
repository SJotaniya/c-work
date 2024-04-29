#include<stdio.h>

int main()
{
    int row,col;
    printf("Enter Rows of Array : ");
    scanf("%d",&row);
    printf("Enter Columns of Array : ");
    scanf("%d",&col);

    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Array[%d][%d] : ",i,j);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%3d",arr[i][j]);
        }
        printf("\n");
    }

    int r, sumr = 0, c, sumc = 0;

    printf("\nEnter Number of Row for Sum :- ");
    scanf("%d",&r);
    int rc = r-1;

    for (int i = rc; i < row; i++)
    {
        if (i == rc + 1)
        {
            break;
        }
        for (int j = 0; j < col; j++)
        {
            sumr += arr[i][j];
        }
    }
    printf("Sum of Row %d = %d\n",r,sumr);

    printf("\nEnter Number of Column for Sum :- ");
    scanf("%d",&c);
    int cc = c-1;

    for (int i = 0; i < row; i++)
    {
        for (int j = cc; j < col; j++)
        {
            if (j == cc + 1)
            {
                break;
            }
            sumc += arr[i][j];
        }
    }
    printf("Sum of Column %d = %d\n",c,sumc);
}