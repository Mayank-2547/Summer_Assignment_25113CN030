#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size],key;
    printf("Enter the elements of the array: ");
    for (int i=0;i<size;i++)
        scanf("%d",&arr[i]);
    printf("Enter the element to be found: ");
    scanf("%d",&key);
    for (int i=0;i<size;i++){
        if (key==arr[i]){
            printf("Element found at %d index.",i);
            break;
        }
    }
    return 0;
}