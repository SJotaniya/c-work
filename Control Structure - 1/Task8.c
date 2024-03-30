#include<stdio.h>

int main()
{
    int a;
    printf("Enter the Marks : ");
    scanf("%d",&a);

    if(a>=90 && a<=100)
    {
        printf("Your marks is %d\n",a);
        printf("Your Grade is A");
    }
    else if (a>=80 && a<=89)
    {
        printf("Your marks is %d\n",a);
        printf("Your Grade is B");
    }
    else if (a>=70 && a<=79)
    {
        printf("Your marks is %d\n",a);
        printf("Your Grade is C");
    }
    else if (a>=60 && a<=69)
    {
        printf("Your marks is %d\n",a);
        printf("Your Grade is D");
    }
    else if (a<60)
    {
        printf("Your marks is %d\n",a);
        printf("Sorry ! You are Fail");
    }
    else
    {
        printf("Entered Invalid Marks");
    }
}