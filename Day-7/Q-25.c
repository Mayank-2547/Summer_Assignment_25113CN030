#include<stdio.h>
int fact(int x){
    if (x==1)
        return 1;
    else 
        return (x*fact(x-1));
}
int main(){
    int num,temp;
    printf("Enter any number:");
    scanf("%d",&num);
    temp=fact(num);
    printf("Factorial of given number is %d.",temp);
    return 0;
}