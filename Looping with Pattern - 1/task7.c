// A
// B A
// C B A
// D C B A
// E D C B A

#include<stdio.h>

void main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j >= 0; j--)
        {
            printf("%c ",j+65);
        }
        printf("\n");
    }
}