#include<stdio.h>

struct employee
{
    emp_id;
    emp_name;
    emp_age;
    emp_role;
    emp_city;
    emp_experience;
    emp_company_name;
}emp[];

int main()
{
    int n;
    printf("How many student's data will you enter : ");
    scanf("%d",&n);
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("Enter Student ID : ");
        scanf("%d",&emp[i].emp_id);

        printf("Enter empdnet Name : ");
        scanf("%s",&emp[i].emp_name);

        printf("Enter Age : ");
        scanf("%d",&emp[i].emp_age);

        printf("Enter Course : ");
        scanf("%s",&emp[i].emp_role);

        printf("empdent City : ");
        scanf("%s",&emp[i].emp_city);

        printf("Enter Standard : ");
        scanf("%d",&emp[i].emp_experience);

        printf("Enter School Name : ");
        scanf("%s",&emp[i].emp_company_name);

        printf("\n");        
    }

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("ID : %d\n",emp[i].emp_id);
        printf("Name : %s\n",emp[i].emp_name);
        printf("Age : %s\n",emp[i].emp_age);
        printf("Age : %s\n",emp[i].emp_role);
        printf("Course : %s\n",emp[i].emp_city);
        printf("City : %d\n",emp[i].emp_experience);
        printf("School : %s\n",emp[i].emp_company_name);
    }
}