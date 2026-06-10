#include<stdio.h>
int main(){
    int size,key;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of the array: ");
    for (int i=0;i<size;i++)
        scanf("%d",&arr[i]);
    printf("Enter the element to find the duplicate for: ");
    scanf("%d",&key);
    for (int i=0;i<size;i++){
        if (key==arr[i])
            printf("Duplicate element found at %d index.",i);
    }
    return 0;
}