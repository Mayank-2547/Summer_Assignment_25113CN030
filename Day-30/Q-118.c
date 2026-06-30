#include <stdio.h>
int main() {
    int n, i;
    int bookId[100];
    char bookName[100][50];
    char author[100][50];
    printf("Enter number of books: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("\nEnter details of Book %d\n", i + 1);
        printf("Enter Book ID: ");
        scanf("%d", &bookId[i]);
        printf("Enter Book Name: ");
        scanf("%s", bookName[i]);
        printf("Enter Author Name: ");
        scanf("%s", author[i]);
    }
    for(i = 0; i < n; i++) {
        printf("\nBook %d\n", i + 1);
        printf("Book ID: %d\n", bookId[i]);
        printf("Book Name: %s\n", bookName[i]);
        printf("Author Name: %s\n", author[i]);
    }
    return 0;
}