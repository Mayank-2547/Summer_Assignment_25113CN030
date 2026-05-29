#include<stdio.h>
int main(){
    int n,org_n,rev_n=0,r,f=0,is_palindrome=0;
    printf("Enter any number: ");
    scanf("%d",&n);
    org_n=n;
    if (n<0){
        n*=(-1);
        f=1;
    }
    while (n>0){
        r=n%10;
        rev_n=(rev_n*10)+r;
        n/=10;
    }
    if (f==1)
        rev_n*=(-1);
    is_palindrome=(org_n==rev_n);
    printf("%d\n%d\n%d\n",org_n,rev_n,is_palindrome);
    if (is_palindrome==1)
        printf("The given number is a palindrome.");
    else
        printf("The given number is not a palindome.");
    return 0;
}