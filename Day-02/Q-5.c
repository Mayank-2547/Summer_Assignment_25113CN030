#include<stdio.h>
int main(){
    int n,s=0,r;
    printf("Enter any number: ");
    scanf("%d",&n);
    if (n<0)
        n=n*(-1);
    while (n>0){
        r=n%10;
        s+=r;
        n/=10;
    }
    printf("Sum of digits of given number is %d.",s);
    return 0;
}