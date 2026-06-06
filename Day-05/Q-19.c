#include<stdio.h>
int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    printf("Factors of the given number are:\n");
    for (int i=1;i<num;i++){
        if (num%i==0)
            printf("%d\n",i);
    }
    return 0;
}