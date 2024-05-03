#include <stdio.h>

int main() {
    int arr[10], i, j, n, freq[10];
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++) {
        freq[i] = 0;
    }
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            if(arr[i] == arr[j]) {
                freq[i]++;
            }
        }
    }
    printf("The frequency of each element is:\n");
    for(i=0; i<n; i++) {
        printf("%d ", arr[i]);
        printf("%d\n", freq[i]);
    }
    return 0;
}