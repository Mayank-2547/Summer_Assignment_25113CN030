#include<stdio.h>
int main(){
    int size,sum;
    float avg;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of the array: ");
    for (int i=0;i<size;i++)
        scanf("%d",&arr[i]);
    for (int i=0;i<size;i++)
        sum+=arr[i];
    avg=(float)sum/(float)size;
    printf("Sum of elements of the array is %d.\n",sum);
    printf("Average of the elements of the array is %f.",avg);
    return 0;
}