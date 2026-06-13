#include<stdio.h>
int main(){
    int size1,size2;
    printf("Enter the size of first array: ");
    scanf("%d",&size1);
    printf("Enter the size of second array: ");
    scanf("%d",&size2);
    int arr1[size1+size2],arr2[size2],j=0;
    printf("Enter the elements of first array: ");
    for (int i=0;i<size1;i++)
        scanf("%d",&arr1[i]);
    printf("Enter the elements of second array: ");
    for (int i=0;i<size2;i++)
        scanf("%d",&arr2[i]);
    for (int i=0;i<size2;i++){
        arr1[size1]=arr2[i];
        size1+=1;
    }
    printf("Array after merging is: ");
    for (int i=0;i<size1;i++)
        printf("%d, ",arr1[i]);
    return 0;
}