#include<stdio.h>

int main()
{
    char ch[20];

    printf("Enter String :");
    scanf("%s",&ch);
    
    for (int i = 0; ch[i] != NULL; i++)
    {
        if (ch[i] >= 'a' && ch[i]<='z')
        {
            ch[i] -= 32;
            printf("%c",ch[i]);
        }
    }
}