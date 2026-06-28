#include<stdio.h>
struct Contact {
    char name[100];
    long long phone;
    char email[100];
    char city[50];
};
int main() {
    int n;
    printf("Enter number of contacts: ");
    scanf("%d", &n);
    struct Contact c[n];
    for(int i = 0; i < n; i++) {
        printf("\nEnter Name: ");
        scanf("%s", c[i].name);
        printf("Enter Phone Number: ");
        scanf("%lld", &c[i].phone);
        printf("Enter Email: ");
        scanf("%s", c[i].email);
        printf("Enter City: ");
        scanf("%s", c[i].city);
    }
    for(int i = 0; i < n; i++) {
        printf("\nName: %s", c[i].name);
        printf("\nPhone Number: %lld", c[i].phone);
        printf("\nEmail: %s", c[i].email);
        printf("\nCity: %s\n", c[i].city);
    }
    return 0;
}