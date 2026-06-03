#include<stdio.h>
int sum(int x){
    if (x==0)
        return x;
    else 
        return (x+sum(x-1));
}
int main(){
    int num,temp;
    printf("Enter any number:");
    scanf("%d",&num);
    temp=sum(num);
    printf("Sum of n number is %d.",temp);
    return 0;
}