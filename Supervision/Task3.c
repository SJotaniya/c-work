#include<stdio.h>

enum week{
    mon = 10 , tue, wed, thurs, fri, sat, sun
};

int main()
{
    printf("Monday %d\n",mon);
    printf("Tuesday %d\n",tue);
    printf("Wednesday %d\n",wed);
    printf("Thursday %d\n",thurs);
    printf("Friday %d\n",fri);
    printf("Saturday %d\n",sat);
    printf("Sunday %d\n",sun);
}