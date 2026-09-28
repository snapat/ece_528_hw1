#include <stdio.h>

int main() {
    long long input;
    unsigned int num;
    int count = 0;

    printf("ECE 528/L - Napat Sungkamee - HW1\n");
    printf("Enter a non-negative integer: ");

    // make sure the input is a valid unsigned 32-bit integer
    if (scanf("%lld", &input) != 1 || input < 0 || input > 4294967295) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 0;
    }

    num = input;

    // each loop clears the lowest 1 bit
    while (num != 0) {
        num &= (num - 1);
        count++;
    }

    printf("Number of bits set in %lld: %d\n", input, count);

    return 0;
}
