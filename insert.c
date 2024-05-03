#include <stdio.h>

int main() {
    int arr[10], i, n, pos, val;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position and value to insert: ");
    scanf("%d %d", &pos, &val);
    for(i=n-1; i>=pos-1; i--) {
        arr[i+1] = arr[i];
    }
    arr[pos-1] = val;
    printf("The updated array is:\n");
    for(i=0; i<=n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}