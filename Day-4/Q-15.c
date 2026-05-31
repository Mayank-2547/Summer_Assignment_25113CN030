#include<stdio.h>
#include<math.h>
int main(){
    int n,n1,n2,l=0,s=0,r;
    printf("Enter any number:");
    scanf("%d",&n);
    n1=n;
    n2=n;
    while (n1>0){
        n1/=10;
        l+=1;
    }
    while (n2>0){
        r=n2%10;
        n2/=10;
        s=s+pow(r,l);
    }    
    if (n==s)
        printf("Given number is an armstrong number.");
    else 
        printf("Given number is not an armstrong number.");
    return 0;
}