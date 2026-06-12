#include<stdio.h>
int main(){
    int size,sum,found=0;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d elements:\n",size);
    for(int i=0;i<size;i++) 
        scanf("%d", &arr[i]);
    printf("Enter the required sum: ");
    scanf("%d",&sum);
    for(int i=0;i<size;i++) {
        for(int j=i;j<size;j++) {
            if(arr[i]+arr[j]==sum) {
                printf("Pair found: (%d, %d)\n",arr[i],arr[j]);
                found=1;
            }
        }
    }
    if(found == 0) 
        printf("No pair found with sum %d\n", sum);
    return 0;
}