#include <stdio.h>

int main() {
    int n;
    unsigned long long a = 0, b = 1, next;

    printf("ECE 528/L - Napat Sungkamee - HW1\n");
    printf("Enter N (2 or greater): ");

    if (scanf("%d", &n) != 1 || n < 2) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }

    printf("Fibonacci sequence up to %d terms:\n", n);
    printf("%llu %llu", a, b);

    for (int i = 2; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
        printf(" %llu", b);
    }
    printf("\n");

    return 0;
}
