#include<stdio.h>
int main(){
    int size,key,freq=0;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of the array: ");
    for (int i=0;i<size;i++)
        scanf("%d",&arr[i]);
    printf("Enter the element to be found: ");
    scanf("%d",&key);
    for (int i=0;i<size;i++){
        if (key==arr[i])
            freq+=1;
    }
    printf("The target element is present %d times in the array.",freq);
    return 0;
}