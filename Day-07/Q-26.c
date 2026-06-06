#include<stdio.h>
int fib(int x){
    if (x==0 || x==1)
        return x;
    else 
        return (fib(x-1) + fib(x-2));
}
int main(){
    int num;
    printf("Enter any number : ");
    scanf("%d",&num);
    printf("Fibonacci series:\n");
    for (int i=0;i<num;i++)
        printf("%d ",fib(i));
    return 0;
}