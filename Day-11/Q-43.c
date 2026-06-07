#include<stdio.h>
int is_prime(int x){
    int flag=0;
    for (int i=2;i<x;i++)
    if (x%i==0){
        flag=1;
        return flag;
    }
}
int main(){
    int num,temp;
    printf("Enter any number: ");
    scanf("%d",&num);
    temp=is_prime(num);
    if (temp==1)
        printf("The given number is not a prime number.");
    else
        printf("The given number is a prime number.");
    return 0;
}