#include<stdio.h>
int main(){
    int a,b,r,lcm;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    int n1=a,n2=b;
    if (a<0)
        a*=(-1);
    if (b<0)
        b*=(-1);
    if (a==0 || b==0)
        printf("LCM of given number is not 0.");
    else{
        while (b!=0){
            r=a%b;
            a=b;
            b=r;
        }
        lcm=(n1*n2)/a;
        printf("LCM of given number is %d",lcm);
    }
    return 0;
}