#include<stdio.h>

int totalChar(char rtn[])
{
    int ch=0;
    for (int i = 0; rtn[i] != NULL; i++)
    {
        ch++;
    }
    return ch;
}

int main()
{
    char str[20];
    printf("Enter String : ");
    scanf("%s",&str);
    
    printf("Total Characters = %d",totalChar(str));

    return 0;
}