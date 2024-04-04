#include<stdio.h>

int main()
{
    char ch[] = "HellO WoRlD";
    
    for (int i = 0; ch[i] != NULL; i++)
    {
        if (ch[i] >= 'a' && ch[i]<='z')
        {
            ch[i] -= 32;
            printf("%c",ch[i]);
        }
    }
}