#include<stdio.h>
int main(){
    int s,e,f;
    printf("Enter the starting range: ");
    scanf("%d",&s);
    printf("Enter the ending range:");
    scanf("%d",&e);
    if (e<s || e<0 || s<0){
        printf("Provide a proper range.");
        return 0;
    }
    printf("Prime numbers between the given range are: ");
    for (int i=s;i<=e;i++){
        f=0;
        if (i==1)
            continue;
        for (int j=2;j<i;j++){
            if (i%j==0){
                f=1;
                break;
            }
        }
        if (f==0)
            printf("%d\n",i);
    }
    return 0;
}