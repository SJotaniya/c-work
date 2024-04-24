#include<stdio.h>

struct book
{
    int id;
    char title[100];
    char author[100];
    char genre[100];
    char publisher[100];
    int publication_year;
    int price;
} book[];

int main()
{
    int n;

    for (int i = 0; i < n; i++)
    {
        printf("Enter Book ID : ");
        scanf("%d", &book[i].id);

        printf("Book Title : ");
        scanf("%s", &book[i].title);

        printf("Book's Author : ");
        scanf("%s", &book[i].author);

        printf("Genre of Book : ");
        scanf("%s", &book[i].genre);

        printf("Publisher : ");
        scanf("%s", &book[i].publisher);

        printf("Publication Year : ");
        scanf("%d", &book[i].publication_year);
    }
    
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("Id : %d\n Title : %s\n Author : %s\n Genre : %s\n Publisher : %s\n Publication_year : %d\n", book[i].id, book[i].title, book[i].author, book[i].genre, book[i].publisher, book[i].publication_year);
        printf("\n");
    }
}