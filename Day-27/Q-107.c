#include<stdio.h>
struct Employee{
    int id;
    char name[50];
    char department[30];
    float salary;
};
int main(){
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    struct Employee e[n];
    for(int i = 0; i < n; i++)
{
        printf("\nEmployee %d\n", i + 1);
        printf("Enter Employee ID: ");
        scanf("%d", &e[i].id);
        printf("Enter Employee Name: ");
        scanf("%s", e[i].name);
        printf("Enter Department: ");
        scanf("%s", e[i].department);
        printf("Enter Salary: ");
        scanf("%f", &e[i].salary);
    }
    for(int i = 0; i < n; i++)
{
        printf("Employee %d\n", i + 1);
        printf("Employee ID : %d\n", e[i].id);
        printf("Employee Name : %s\n", e[i].name);
        printf("Department : %s\n", e[i].department);
        printf("Salary : %.2f\n", e[i].salary);
        printf("\n");
    }
    return 0;
}