#include <stdio.h>
int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size],start=0,end=size-1;
    printf("Enter array elements");
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    while(start < end) {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    printf("Reversed array: ");
    for(int i=0;i<size;i++) 
        printf("%d, ",arr[i]);
    return 0;
}