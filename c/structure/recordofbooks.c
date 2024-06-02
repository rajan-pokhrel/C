#include <stdio.h>
#include <string.h>

struct book {
    int id;
    char title[100];
    float price;
    char author[100];
};

int main() {
    struct book books[500];
    int n, i, j;
    struct book temp;

    printf("Enter the number of books (max 500): ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter details for book %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &books[i].id);
        printf("Title: ");
        scanf("%s", books[i].title); // Read title directly with %s
        printf("Price: ");
        scanf("%f", &books[i].price);
        printf("Author: ");
        scanf("%s", books[i].author); // Read author directly with %s
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(books[j].title, books[j + 1].title) > 0) {
                // Swap the book records
                temp = books[j];
                books[j] = books[j + 1];
                books[j + 1] = temp;
            }
        }
    }

    printf("\nook Records (Sorted by Title):\n");
    printf("ID\tTitle\t\tPrice\tAuthor\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%s\t\t%.2f\t%s\n", books[i].id, books[i].title, books[i].price, books[i].author);
    }

    return 0;
}
