#include<stdio.h>

int main() 
{
    int rate,hours,salary;
    rate = 15;
    printf("Enter worked hours : ",hours);
    scanf("%d",&hours);
    salary = hours * 15;
    printf("Salary = $%d",salary);
}