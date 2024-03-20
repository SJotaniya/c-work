#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next, i;

    printf("Enter any number : ");
    scanf("%d", &n);

    printf("First %d Fibonacci series are: ", n);

    for (i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
    return 0;
}