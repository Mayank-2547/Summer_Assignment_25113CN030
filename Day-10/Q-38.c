#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of the pyramid: ");
    scanf("%d",&size);
    for (int i=size;i>=1;i--) {
        for (int j=1;j<=size-i;j++) {
            printf(" ");
        }
        for (int j=1;j<=i;j++) {
            printf("*");
        }
        for (int j=1;j<i;j++) {
           printf("*");
        }
        printf("\n");
    }
}
