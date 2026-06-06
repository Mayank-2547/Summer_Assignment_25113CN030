#include<stdio.h>
int main(){
    int a=0,b=1,c=1,n;
    printf("Enter the index n: ");
    scanf("%d",&n);
    if (n<0){
        printf("Invaild index.");
        return 0;
    }
    for (int i=1; i<=n; i++){
        if (i==n)
            printf("nth term of Fibonacci series is %d.",c);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}