#include <stdio.h>
#include <string.h>

//orismos domis
// struct struct_name
// {
//  struct_member definition;
//  struct_member definition;
//  ...
//  struct_member definition;
// };

//------------------------------------------------------------------

//paradeigma domis
// struct ypallilos
// {
//  char name[50];
//  char surname[50];
//  char ergasia[100];
//  int AFM;
// };
// struct ypallilos Marios;

struct Book
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

int main()
{
    struct Book Book1;

    strcpy(Book1.title,"Programming in C");
    strcpy(Book1.author,"Stelios Theodorikakos");
    strcpy(Book1.subject, "Basic steps in C programming language");
    Book1.book_id = 12345;

    printf("Book1 title: %s\n",Book1.title);
    printf("Book1 author: %s\n",Book1.author);
    printf("Book1 subject: %s\n",Book1.subject);
    printf("Book1 book_id: %d\n",Book1.book_id);

    return 0;
}