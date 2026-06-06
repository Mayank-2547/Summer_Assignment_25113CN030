#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of the pyramid: ");
    scanf("%d",&size);
    for (int i=1;i<=size;i++) {
        for (int j=1;j<=size-i;j++) {
            printf(" ");
        }
        for (int j=0;j<i;j++) {
            printf("%c",'A'+j);
        }
        for (int j=i-2;j>=0;j--) {
            printf("%c",'A'+j);
        }
        printf("\n");
    }
    return 0;
}