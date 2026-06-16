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
        for (int j=0;j<c;j++) {
            scanf("%d",&matrix[i][j]);
        }
    }
    for (int j=0;j<c;j++) {
        int sum=0;
        for (int i=0;i<r;i++) {
            sum+=matrix[i][j];
        }
        printf("Sum of column %d = %d\n",j+1,sum);
    }
    return 0;
}