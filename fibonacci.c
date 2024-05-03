#include <stdio.h>

int fibonacci(int n) {
    if(n == 0 || n == 1) {
        return n;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main() {
    int n;
    printf("Enter the term number: ");
    scanf("%d", &n);
    printf("The %dth fibonacci term is: %d\n", n, fibonacci(n));
    return 0;
}