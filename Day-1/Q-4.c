#include<stdio.h>
int main(){
    int n,c=0;
    printf("Enter any number: ");
    scanf("%d",&n);
    if (n<0)
        n=n*(-1);
    while (n>0){
        n=n/10;
        c=c+1;
    }
    printf("There are %d digits in the given number.",c);
    return 0;
}