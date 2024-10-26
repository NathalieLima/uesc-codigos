#include <stdio.h>

void inverter(int val) {
    if (val == 0) {
        printf("0");
        return;
    }

    while (val != 0) {
        printf("%d", val % 10);

        val /= 10;
    }
}

int main() {
    int numero = 123456;
    printf("Número invertido sem recursão: ");
    inverter(numero);
    printf("\n");

    return 0;
}
