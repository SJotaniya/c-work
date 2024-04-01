#include<stdio.h>

int main()
{
    float sum = 0;
    float arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum = sum + arr[i][j];
        }
    }

    printf("Sum = %.2f\n",sum);
    printf("Avr = %.2f",sum/9);
}