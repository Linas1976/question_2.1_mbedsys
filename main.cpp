#include "mbed.h"

int main() {

    int a = 0, b = 1; // First two terms of the Fibonacci sequence
    int next_term;

    printf("Fibonacci sequence up to term 10:\n");

    for (int i = 1; i <= 10; ++i) {
        printf("%d ", a);
        next_term = a + b;
        a = b;
        b = next_term;
    }

    printf("\n");

    while (true);
}


