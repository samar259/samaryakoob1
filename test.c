#include <stdio.h>
#include <stdint.h>

int main() {
    int16_t a, b, X;

    printf("Enter the value of a: ");
    scanf("%hd", &a);

    printf("Enter the value of b: ");
    scanf("%hd", &b);

    if (a > b) {
        X = 2 + b / a;

        if (X < -32768 || X > 32767) {
            printf("Error: Result is out of range.\n");
        } else {
            printf("X = %hd\n", X);
        }
    } else if (a == b) {
        X = -2;
        printf("X = %hd\n", X);
    } else {
        X = a - 5 / b;

        if (X < -32768 || X > 32767) {
            printf("Error: Result is out of range.\n");
        } else {
            printf("X = %hd\n", X);
        }
    }

    return 0;
}

