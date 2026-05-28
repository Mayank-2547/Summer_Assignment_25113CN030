#include<stdio.h>
int main(){
    int n,fact=1;
    printf("Enter any number: ");
    scanf("%d",&n);
    if (n<0){
        printf("Invalid input.");
        return 0;
    }
    for (int i=1; i<=n; i++){
        fact*=i;
    }
    printf("Factorial of %d is %d.",n,fact);
    return 0;
}