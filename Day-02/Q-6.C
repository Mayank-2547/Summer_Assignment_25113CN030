#include<stdio.h>
int main(){
    int n,rev_n=0,r,f=0;
    printf("Enter any number: ");
    scanf("%d",&n);
    if (n<0){
        n=n*(-1);
        f=1;
    }
    while (n>0){
        r=n%10;
        rev_n=(rev_n*10)+r;
        n/=10;
    }
    if (f==1)
        rev_n*=(-1);
    printf("Reverse of given number is %d.",rev_n);
    return 0;
}