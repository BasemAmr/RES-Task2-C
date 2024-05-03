#include <stdio.h>

int main() {
    int arr[10][10], i, j, n, sum=0;
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);
    printf("Enter the elements of the matrix:\n");
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for(i=0; i<n; i++) {
        sum += arr[i][i];
    }
    printf("The sum of main diagonal elements is: %d\n", sum);
    return 0;
}