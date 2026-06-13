#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size],min,max;
    printf("Enter the elements of the array: ");
    for (int i=0;i<size;i++)
        scanf("%d",&arr[i]);
    min=arr[0];
    max=arr[0];
    for (int i=0;i<size;i++){
        if (arr[i]>max)
            max=arr[i];
        if (arr[i]<min)
            min=arr[i];
    }
    printf("Largest element of the array is %d.\n",max);
    printf("Smallest elements of the array is %d.\n",min);
    return 0;
}