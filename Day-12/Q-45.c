#include<stdio.h>
int palindrome(int x){
    int r,rev_n;
    while (x>0){
        r=x%10;
        rev_n=(rev_n*10)+r;
        x/=10;
    }
    return rev_n;
}
int main(){
    int num,temp;
    printf("Enter any number: ");
    scanf("%d",&num);
    temp=palindrome(num);
    if (num==temp)
        printf("The given number is a palindrome.");
    else    
        printf("The given number is not a palindrome.");
    return 0;
}