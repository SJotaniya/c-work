#include<stdio.h>
#include<string.h>

int main()
{
    char strOne[20],strTwo[40];
    printf("Enter First String : ");
	gets(strOne);
	printf("Enter Second String : ");
	gets(strTwo);

    int s;
    s = strcmp(strOne,strTwo);

    if (s == 0)
    {
        printf("Strings are equal");
    }
    else
    {
        printf("No, they are not equal");
    }
}