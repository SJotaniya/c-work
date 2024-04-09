#include<stdio.h>
#include<string.h>

int main()
{
    char frstnm[25],lstnm[25],fullnm[50];
    printf("Enter First String : ");
    gets(frstnm);
    printf("Enter Second String : ");
    gets(lstnm);

    strcpy(fullnm,strcat(frstnm,lstnm));
    puts(fullnm);
}