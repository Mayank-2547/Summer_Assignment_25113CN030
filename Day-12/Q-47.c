#include<stdio.h>
int fib(int x){
    int a=0,b=1,c;
    for (int i=0;i<x;i++){
        printf("%d, ",a);
        c=a+b;
        a=b;
        b=c;
    }
}
int main(){
    int num;
    printf("Enter the range of the series: ");
    scanf("%d",&num);
    printf("Fibonaci series: ");
    fib(num);
    return 0;
}