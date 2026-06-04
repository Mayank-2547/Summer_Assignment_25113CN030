#include <stdio.h>
int main(){
    int size;
    int i, j; 
    printf("Enter a number (1-26): ");
    scanf("%d", &size);
    for (i = 1; i <= size; i++) {
        for (j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }
    return 0;
}