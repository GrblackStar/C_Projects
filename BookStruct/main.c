#include <stdio.h>
#include <stdlib.h>

struct Author {
    char firstName[10];
    char lastName[10];
    int birthYear;
};
typedef struct Author Author;

struct Book {
    char title[20];
    Author author;
    char genre[10];
    int yearOfPublishing;
};
typedef struct Book Book;

int main()
{
	Book books[2];

	for(int i = 0; i < 2; i++) {
        printf("\n");
        printf("Book number %d: \n", i + 1);
        scanf("%s", &books[i].title);
        scanf("%s", &books[i].author.firstName);
        scanf("%s", &books[i].author.lastName);
        scanf("%d", &books[i].author.birthYear);
        scanf("%s", &books[i].genre);
        scanf("%d", &books[i].yearOfPublishing);
	}

	for(int i = 0; i < 2; i++) {
        printf("\n");
        printf("Book number %d: \n", i + 1);
        printf("Title: %s \n", books[i].title);
        printf("Author: %s %s, born in %d \n", books[i].author.firstName, books[i].author.lastName, books[i].author.birthYear);
        printf("Genre: %s \n", books[i].genre);
        printf("Year of publishing: %d \n", books[i].yearOfPublishing);
	}

	Book* book3 = &books[1];
	printf("\n");
    printf("Book number 3: \n");
    printf("Title: %s \n", book3->title);
    printf("Author: %s %s, born in %d \n", book3->author.firstName, book3->author.lastName, book3->author.birthYear);
    printf("Genre: %s \n", book3->genre);
    printf("Year of publishing: %d \n", book3->yearOfPublishing);

    return 0;
}
