#include<stdio.h>
int main(){
    int size1,size2;
    printf("Enter the size of first array: ");
    scanf("%d",&size1);
    printf("Enter the size of seconf array: ");
    scanf("%d",&size2);
    int arr1[size1+size2], arr2[size2];

    printf("Enter the first sorted array: \n");
    for (int i=0;i<size1;i++)
        scanf("%d",&arr1[i]);

    printf("Enter the second sorted array: \n");
    for (int i=0;i<size2;i++)
        scanf("%d",&arr2[i]);   

    for (int i=0;i<size2;i++)
        arr1[size1+i]=arr2[i];
    
    for (int i=0;i<size1+size2;i++)
        printf("New merged array is \n%d ",arr1[i]); 

    return 0;
}