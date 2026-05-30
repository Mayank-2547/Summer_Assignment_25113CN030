#include<stdio.h>
int main(){
    int n,f=0;
    printf("Enter any number:");
    scanf("%d",&n);
    if (n<0){
        printf("Number should be non-negative.");
        return 0;
    }
    else if (n==1 || n==0){
        printf("Entered number is not prime.");
        return 0;
    }
    else{
        for (int i=2; i<n; i++){
            if (n%i==0){
                f=1;
            }
        }
    }
    if (f==1)
        printf("Entered number is not prime");
    else 
        printf("Entered number is prime.");
    return 0;
}