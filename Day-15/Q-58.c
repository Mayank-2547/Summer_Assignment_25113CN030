#include <stdio.h>
int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d elements:\n",size);
    for(int i=0;i<size;i++) 
        scanf("%d",&arr[i]);
    int first=arr[0];
    for(int i=0;i<size-1;i++)
        arr[i]= arr[i + 1];
    arr[size-1]=first;
    printf("Array after left rotation:\n");
    for(int i=0;i<size;i++) 
        printf("%d ",arr[i]);
    return 0;
}