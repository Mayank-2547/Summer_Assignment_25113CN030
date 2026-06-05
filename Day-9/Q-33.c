#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of pyramid: ");
    scanf("%d",&size);
    for (int i=0;i<size;i++){
        for (int j=size;j>i;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}