#include <stdio.h>

// Function to swap variables by passing parameters by value
void swap_by_value(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Inside swap_by_value: a = %d, b = %d\n", a, b);
}

// Function to swap variables by passing parameters by reference
void swap_by_reference(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside swap_by_reference: a = %d, b = %d\n", *a, *b);
}

int main() {
    int x = 5, y = 10;
    printf("Before swapping: x = %d, y = %d\n", x, y);
    swap_by_value(x, y);
    printf("After swapping by value: x = %d, y = %d\n", x, y);
    swap_by_reference(&x, &y);
    printf("After swapping by reference: x = %d, y = %d\n", x, y);
    return 0;
}