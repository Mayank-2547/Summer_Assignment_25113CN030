#include<stdio.h>
int main(){
    int a,b,r;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    if (a<0)
        a*=(-1);
    if (b<0)
        b*=(-1);
    if (a==0 || b==0)
        printf("GCD of given number is not defined");
    else{
        while (b!=0){
            r=a%b;
            a=b;
            b=r;
        }
        printf("GCD of given number is %d",a);
    }
    return 0;
}