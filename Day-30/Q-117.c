#include <stdio.h>
int main() {
    int n, i;
    int roll[100];
    char name[100][50];
    float marks[100];
    printf("Enter number of students: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("\nEnter details of Student %d\n", i + 1);
        printf("Enter Roll Number: ");
        scanf("%d", &roll[i]);
        printf("Enter Name: ");
        scanf("%s", name[i]);
        printf("Enter Marks: ");
        scanf("%f", &marks[i]);
    }
    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number: %d\n", roll[i]);
        printf("Name: %s\n", name[i]);
        printf("Marks: %.2f\n", marks[i]);
    }
    return 0;
}