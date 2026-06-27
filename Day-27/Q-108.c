#include<stdio.h>
struct Student{
    int rollNo;
    char name[50];
    float maths;
    float science;
    float english;
    float total;
    float percentage;
};
int main(){
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student s[n];
    for(int i = 0; i < n; i++){
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &s[i].rollNo);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Maths Marks: ");
        scanf("%f", &s[i].maths);
        printf("Science Marks: ");
        scanf("%f", &s[i].science);
        printf("English Marks: ");
        scanf("%f", &s[i].english);
        s[i].total = s[i].maths + s[i].science + s[i].english;
        s[i].percentage = s[i].total / 3;
    }
    for(int i = 0; i < n; i++)
{
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number : %d\n", s[i].rollNo);
        printf("Name : %s\n", s[i].name);
        printf("Maths : %.2f\n", s[i].maths);
        printf("Science : %.2f\n", s[i].science);
        printf("English : %.2f\n", s[i].english);
        printf("Total : %.2f\n", s[i].total);
        printf("Percentage : %.2f\n", s[i].percentage);

        if(s[i].percentage >= 90)
            printf("Grade : A+\n");
        else if(s[i].percentage >= 75)
            printf("Grade : A\n");
        else if(s[i].percentage >= 60)
            printf("Grade : B\n");
        else if(s[i].percentage >= 40)
            printf("Grade : C\n");
        else
            printf("Grade : Fail\n");
    }
    return 0;
}