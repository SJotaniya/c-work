#include<stdio.h>

struct stud
{
    int stu_id;
    char stu_name[25];
    int stu_age;
    char stu_course[20];
    char stu_city[20];
    int stu_standard;
    char stu_school[30];
}stu[];

int main()
{
    int n;
    printf("How many student's data will you enter : ");
    scanf("%d",&n);
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("Enter Student ID : ");
        scanf("%d",&stu[i].stu_id);

        printf("Enter Studnet Name : ");
        scanf("%s",&stu[i].stu_name);

        printf("Enter Age : ");
        scanf("%d",&stu[i].stu_age);

        printf("Enter Course : ");
        scanf("%s",&stu[i].stu_course);

        printf("Student City : ");
        scanf("%s",&stu[i].stu_city);

        printf("Enter Standard : ");
        scanf("%d",&stu[i].stu_standard);

        printf("Enter School Name : ");
        scanf("%s",&stu[i].stu_school);

        printf("\n");        
    }

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("ID : %d\n",stu[i].stu_id);
        printf("Name : %s\n",stu[i].stu_name);
        printf("Age : %s\n",stu[i].stu_age);
        printf("Course : %s\n",stu[i].stu_course);
        printf("City : %s\n",stu[i].stu_city);
        printf("Standard : %d\n",stu[i].stu_standard);
        printf("School : %s\n",stu[i].stu_school);
    }
}