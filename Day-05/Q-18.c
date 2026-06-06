#include<stdio.h>
int fact(int x){
    int f=1;
    while (x>0){
        f*=x;
        x-=1;
    }
    return f;
}
int main(){
    int num,original_num,r,sum=0;
    printf("Enter any number: ");
    scanf("%d",&num);
    original_num=num;
    while (num>0){
        r=num%10;
        num/=10;
        sum+=fact(r);
    }
    if (original_num==sum)
        printf("The given number is a strong number.");
    else 
        printf("The given number is not a strong number.");
    return 0;
}