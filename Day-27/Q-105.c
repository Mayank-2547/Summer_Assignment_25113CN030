#include<stdio.h>
struct Student{
    int roll;
    char name[100];
    int phone;
    char branch[30]; 
};
int main(){
    int n;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    struct Student s[n];
    for (int i=0;i<n;i++){
        printf("Enter student's roll no: ");
        scanf("%d",&s[i].roll);
        printf("Enter the name of the student: ");
        scanf("%s",&s[i].name);
        printf("Enter student's phone number: ");
        scanf("%d",&s[i].phone);
        printf("Enter student's branch: ");
        scanf("%s",&s[i].branch);
        printf("\n");
    }
    for (int i=0;i<n;i++){
        printf("Student's roll no: %d", s[i].roll);
        printf("Name of the student: %s\n", s[i].name);
        printf("Student's phone number: %d\n", s[i].phone);
        printf("Student's branch: %s\n", s[i].branch);
        printf("\n");
    }
    return 0;
}