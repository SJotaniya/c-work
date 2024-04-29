#include <stdio.h>

struct car
{
    int id;
    char Company[100];
    char Modal[100];
    int Year;
    char Color[100];
    int Price;
    int Mileage;
} car[];

int main()
{
    int n;

    printf("Enter The Size Of cars :");
    scanf("%d", &n);
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("Enter ID Of car : ");
        scanf("%d", &car[i].id);

        printf("Enter Company Of car : ");
        scanf("%s", &car[i].Company);

        printf("Enter Model Of car : ");
        scanf("%s", &car[i].Modal);

        printf("Enter Year Of Menufechar : ");
        scanf("%d", &car[i].Year);

        printf("Enter Color Of car : ");
        scanf("%s", &car[i].Color);

        printf("Enter Price Of car : ");
        scanf("%d", &car[i].Price);

        printf("Enter Mileage Of car : ");
        scanf("%d", &car[i].Mileage);
    }

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("ID : %d\n Company : %s\n Model : %s\n Year : %d\n Color : %s\n Price : %d\n Mileage : %d\n", car[i].id, car[i].Company, car[i].Modal, car[i].Year, car[i].Color, car[i].Price);
        printf("\n");
    }  
}