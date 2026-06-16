#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    printf("Enter the number of columns: ");
    scanf("%d",&c);

    int matrix[r][c];
    printf("Enter the elements of the matrix:\n");
    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    for (int i=0;i<r;i++) {
        int sum=0;
        for (int j=0;j<c;j++) {
            sum +=matrix[i][j];
        }
        printf("Sum of row %d is %d\n",i+1,sum);
    }
    return 0;
}