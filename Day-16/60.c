#include<stdio.h>
int main() {
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements:",size);
    for(int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }
    printf("Array after removing duplicates:\n");
    for(int i=0;i<size;i++) {
        int dup=0;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                dup=1;
                break;
            }
        }
        if(dup==0)
            printf("%d ",arr[i]);
    }
    return 0;

}