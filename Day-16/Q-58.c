#include<stdio.h>
int main() {
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d elements:",size);
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);
    int maxFreq=0;
    int maxElement;
    for(int i=0;i<size;i++) {
        int count=1;
        for(int j=i+1;j<size;j++)
            if(arr[i]==arr[j])
                count++;
        if(count > maxFreq) {
            maxFreq = count;
            maxElement = arr[i];
        }
    }
    printf("Maximum frequency element = %d\n",maxElement);
    printf("Frequency = %d\n",maxFreq);
    return 0;
}