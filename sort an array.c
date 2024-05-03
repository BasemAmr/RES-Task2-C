#include <stdio.h>

void sortArray(int arr[], int n, int order) {
    int i, j, temp;
    for(i=0; i<n-1; i++) {
        for(j=0; j<n-i-1; j++) {
            if((arr[j] > arr[j+1] && order == 1) || (arr[j] < arr[j+1] && order == 0)) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int arr[10], i, n, order;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter 1 for ascending order, 0 for descending order: ");
    scanf("%d", &order);
    sortArray(arr, n, order);
    printf("The sorted array is:\n");
    for(i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}