#include<stdio.h>
struct Employee{
    int id;
    char name[100];
    int phone;
    char post[30]; 
};
int main(){
    int n;
    printf("Enter the number of employees: ");
    scanf("%d",&n);
    struct Employee e[n];
    for (int i=0;i<n;i++){
        printf("Enter employee's roll no: ");
        scanf("%d",&e[i].id);
        printf("Enter the name of the employee: ");
        scanf("%s",&e[i].name);
        printf("Enter employee's phone number: ");
        scanf("%d",&e[i].phone);
        printf("Enter employee's post: ");
        scanf("%s",&e[i].post);
        printf("\n");
    }
    for (int i=0;i<n;i++){
        printf("Employee's roll no: %d", e[i].id);
        printf("Name of the Employee: %s\n", e[i].name);
        printf("Employee's phone number: %d\n", e[i].phone);
        printf("Employee's post: %s\n", e[i].post);
        printf("\n");
    }
    return 0;
}