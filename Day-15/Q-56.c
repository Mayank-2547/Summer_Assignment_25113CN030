#include <stdio.h>
int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d elements:\n",size);
    for(int i=0;i<size;i++) 
        scanf("%d",&arr[i]);    
    int j=0;
    for(int i=0;i<size;i++) {
        if(arr[i]!=0) {
            arr[j]=arr[i];
            j++;
        }
    }
    while(j<size){
        arr[j]=0;
        j++;
    }
    printf("Array after moving zeroes to the end:\n");
    for(int i=0;i<size;i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}