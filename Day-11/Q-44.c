#include<stdio.h>
int fact(int x){
    int f=1;
    for (int i=1;i<=x;i++)
        f*=i;
    return (f);
}
int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    printf("The factorial of given number is %d.",fact(num));
    return 0;
}