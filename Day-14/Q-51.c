#include<stdio.h>
int main(){
    int size,key;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of the array: ");
    for (int i=0;i<size;i++)
        scanf("%d",&arr[i]);
    int max=arr[0],sec_max=arr[0];
    for (int i=0;i<size;i++){
        if (arr[i]>max){
            sec_max=max;
            max=arr[i];
        }
    }
    printf("The second largest number in the array is %d.",sec_max);
    return 0;
}