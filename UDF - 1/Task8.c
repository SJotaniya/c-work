#include<stdio.h>

void printTable()
{
    for (int i = 1; i < 11; i++)
    {
        printf("5 * %d = %d\n",i,5*i);
    }
}

int main()
{
    printTable();
}