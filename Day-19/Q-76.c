#include<stdio.h>
int main(){
    int r,sum=0;
    printf("Enter the size of matrix: ");
    scanf("%d",&r);

    int matrix[r][r];
    printf("Enter the elements of matrix: ");
    for (int i=0;i<r;i++)
        for (int j=0;j<r;j++)
            scanf("%d",&matrix[i][j]);
        
    for (int i=0;i<r;i++)
        sum=sum+matrix[i][i];
    
    printf("The sum of diagonal element is %d.",sum);
    return 0;
}