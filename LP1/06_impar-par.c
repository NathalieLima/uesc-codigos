#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int numero;

    if (numero % 2 == 0) {
        printf("Este eh um numero par.");
    }
    else if (numero % 3 == 0) {
        printf("Este eh um numero impar.");
    }

    return 0;
}
