#include <stdio.h>

asm(".ident \"Pulkit-RISCV-GCC v1.0\"");

int main() {
    int number = 2;
    int squared = number * number;

    printf("The square of %d is %d\n", number, squared);
    return 0;
}