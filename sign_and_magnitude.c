#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;

    printf("ECE 528/L - Napat Sungkamee - HW1\n");
    printf("Enter an integer: ");
    scanf("%d", &num);

    // check the sign bit (bit 31), it's 1 if the number is negative
    unsigned int sign = (unsigned int)num >> 31;

    if (sign == 1) {
        printf("%d is negative.\n", num);
    } else if (num == 0) {
        printf("%d is zero.\n", num);
    } else {
        printf("%d is positive.\n", num);
    }

    printf("Absolute value: %d\n", abs(num));

    return 0;
}
