#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d elements:",size);
    for(int i=0;i<size;i++) 
        scanf("%d",&arr[i]);
    int last=arr[size-1];
    for(int i=size-1;i>0;i--) 
        arr[i]=arr[i-1];
    arr[0]=last;
    printf("Array after right rotation: ");
    for(int i=0;i<size;i++) 
        printf("%d, ",arr[i]);
    
    return 0;
}