#include<stdio.h>

int main()
{
    char val[]="HelLo worLD";

    for (int i=0; val[i]!=NULL; i++)
    {
        if (val[i]>='a' && val[i]<='z')
        {
            val[i]-=32;
        }

        else if(val[i]>='A' && val[i]<='Z')
        {
            val[i]+=32;
        }

        else{
            // printf("");
        }

        printf("%c",val[i]);
        
    }
}