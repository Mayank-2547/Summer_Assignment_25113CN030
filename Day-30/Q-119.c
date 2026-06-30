#include <stdio.h>
int main() {
    int n, i;
    int empId[100];
    char empName[100][50];
    char department[100][50];
    float salary[100];
    printf("Enter number of employees: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("\nEnter details of Employee %d\n", i + 1);
        printf("Enter Employee ID: ");
        scanf("%d", &empId[i]);
        printf("Enter Employee Name: ");
        scanf("%s", empName[i]);
        printf("Enter Department: ");
        scanf("%s", department[i]);
        printf("Enter Salary: ");
        scanf("%f", &salary[i]);
    }
    for(i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("Employee ID: %d\n", empId[i]);
        printf("Employee Name: %s\n", empName[i]);
        printf("Department: %s\n", department[i]);
        printf("Salary: %.2f\n", salary[i]);
    }
    return 0;
}