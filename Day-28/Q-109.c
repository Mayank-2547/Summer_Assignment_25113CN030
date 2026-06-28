#include<stdio.h>
struct Library{
    int id;
    char name[100];
    int phone;
    int issue_date;
    int return_date; 
};
int main(){
    int n;
    printf("Enter the number of entries: ");
    scanf("%d",&n);
    struct Library l[n];
    for (int i=0;i<n;i++){
        printf("Enter book id: ");
        scanf("%d",&l[i].id);
        printf("Enter the name of the customer: ");
        scanf("%s",&l[i].name);
        printf("Enter customer's phone number: ");
        scanf("%d",&l[i].phone);
        printf("Enter issue date: ");
        scanf("%d",&l[i].issue_date);
        printf("Enter return date: ");
        scanf("%d",&l[i].return_date);
        printf("\n");
    }
    for (int i=0;i<n;i++){
        printf("\nBook id: %d\n", l[i].id);
        printf("Name of the customer: %s\n", l[i].name);
        printf("Customer's phone number: %d\n", l[i].phone);
        printf("Book issue date: %d\n", l[i].issue_date);
        printf("Book return date: %d",l[i].return_date);
        printf("\n");
    }
    return 0;
}