#include <stdio.h>

void inverter(int val) {
    if (val == 0) {
        return;
    }

    printf("%d", val % 10);

    inverter(val / 10);
}

int main() {
    int numero = 123456;
    printf("Número invertido recursivamente: ");
    inverter(numero);
    printf("\n");

    return 0;
}
