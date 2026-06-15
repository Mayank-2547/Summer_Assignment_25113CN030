#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the number of rows of matrix: ");
    scanf("%d",&r);
    printf("Enter the number of columns of matrix: ");
    scanf("%d",&c);

    int m1[r][c],m2[r][c],m3[r][c];

    printf("Enter the elements of matrix 1: ");
    for (int i=0;i<r;i++)
        for (int j=0;j<c;j++)
            scanf("%d",&m1[i][j]);

    printf("Enter the elements of matrix 2: ");
    for (int i=0;i<r;i++)
        for (int j=0;j<c;j++)
            scanf("%d",&m2[i][j]);

    printf("Addition of two matrices:\n");
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            m3[i][j]=m1[i][j]+m2[i][j];
            printf("%d ",m3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
