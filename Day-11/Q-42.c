#include<stdio.h>
int max(int x,int y){
    if (x>y)
        printf("%d is greater than %d.",x,y);
    else 
        printf("%d is greater than %d.",y,x);
}
int main(){
    int num1,num2;
    printf("Enter 1st number: ");
    scanf("%d",&num1);
    printf("Enter 2nd number: ");
    scanf("%d",&num2);
    max(num1,num2);
    return 0;
}