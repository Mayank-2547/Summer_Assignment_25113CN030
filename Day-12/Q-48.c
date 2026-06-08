#include<stdio.h>
int perf_num(int x){
    int sum=0;
    for (int i=1;i<x;i++){
        if (x%i==0)
            sum+=i;
    }
    return (x==sum);
}
int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    if (perf_num(num))
        printf("The given number is a perfect number.");
    else    
        printf("The given number is not a perfect number.");
    return 0;
}