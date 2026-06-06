#include<stdio.h>
int main(){
    int n, sum=0;
    printf("Enter any number: ");
    scanf("%d",&n);
    if (n<0){
        printf("Invalid input.");
        return 0;
    }
    for (int i=0; i<=n; i++){
        sum +=i;
    }
    printf("Sum of first %d numbers is %d.",n,sum);
    return 0;
}