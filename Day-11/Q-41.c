#include<stdio.h>
int sum(int x,int y){
    printf("Sum of given number is %d.",x+y);
}
int main(){
    int num1,num2;
    printf("Enter 1st number: ");
    scanf("%d",&num1);
    printf("Enter 2nd number: ");
    scanf("%d",&num2);
    sum(num1,num2);
    return 0;
}
