#include<stdio.h>

int main()
{
    FILE *p;

    char data[100];

    p=fopen("demo1.txt","a");

    if(p==NULL)
    {
        printf("Can't open file...");
    }
    else
    {
        printf("Open file...\n");
    }
    
    printf("Enter data...");
    gets(data);
    fputs(data,p);
}