#include<stdio.h>

int main()
{
    float a,b=0.50,c=0.75,d=1.20,e=1.50,f;
    printf("Enter Electricity Units Used By You : ");
    scanf("%f",&a);

    if(a>=0 && a<=50)
    {
        f = a*b;
        printf("Your Electricity Before Tax Bill : Rs. %.2f \n",f);
        printf("Your Electricity Bill : Rs. %.2f", f+(f*0.20));
    }
    else if(a>=51 && a<=150)
    {
        f = a*c;
        printf("Your Electricity Before Tax Bill : Rs. %.2f \n",f);
        printf("Your Electricity Bill : Rs. %.2f", f+(f*0.20));
    }
    else if(a>=151 && a<=250)
    {
        f = a*d;
        printf("Your Electricity Before Tax Bill : Rs. %.2f \n",f);
        printf("Your Electricity Bill : Rs. %.2f", f+(f*0.20));
    }
    else if(a>250)
    {
        f = a*e;
        printf("Your Electricity Before Tax Bill : Rs. %.2f \n",f);
        printf("Your Electricity Bill After Tax : Rs. %.2f", f+(f*0.20));
    }
    else
    {
        printf("Please Enter Valid Units");
    }
}