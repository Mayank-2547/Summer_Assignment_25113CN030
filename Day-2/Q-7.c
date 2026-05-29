#include<stdio.h>
int  main(){
    int n,p=1,r;
    printf("Enter any number: ");
    scanf("%d",&n);
    if (n<0)
        n*=(-1);
    while (n>0){
        r=n%10;
        p*=r;
        n/=10;
    }
    printf("Product of digits of given number is %d.",p);
    return 0;
}