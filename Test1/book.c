#include <stdio.h>
#include <string.h>

struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int bookid;
};

void printBook(struct Books *book);
int main()
{
    struct Books Book1;

    strcpy(Book1.title, "APP");
    strcpy(Book1.author, "APPauthor");
    strcpy(Book1.subject, "C Programming Tutorial");
    Book1.bookid = 114514;

    printBook(&Book1);
}
void printBook(struct Books *book)
{
    printf("Book title: %s\n",book->title);
    printf("Book author: %s\n",book->author);
    printf("Book subject: %s\n",book->subject);
    printf("Book bookid: %d\n",book->bookid);
}