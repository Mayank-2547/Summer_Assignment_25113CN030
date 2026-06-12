#include<stdio.h>
int main() {
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d elements:",size);
    for(int i=0;i<size;i++) 
        scanf("%d",&arr[i]);
    int Sum=(size+1)*(size+2)/2;
    int net=0;
    for(int i=0;i<size;i++) 
        net+=arr[i];
    printf("Missing number = %d", Sum-net);
    return 0;
}