#include<stdio.h>
int main(){
    int size;
    printf("Enter any number(1-26): ");
    scanf("%d",&size);
    for (int i=0;i<size;i++){
        for (int j=0;j<=i;j++){
            printf("%c",'A'+i);
        }
        printf("\n");
    }
    return 0;
}