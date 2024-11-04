#include <stdlib.h>
#include <stdio.h>
#include <time.h>

typedef struct {
    int num;
    int den;
    double valor;
} frac;

frac* geraRandomArray(int);
void imprimeArray(frac*, int);

int main(void)
{
    srand(time(NULL));
    int tam = 5;
    frac* fracoes = geraRandomArray(tam);
    imprimeArray(fracoes, tam);

    free(fracoes);

    return 0;
}

frac* geraRandomArray(int tam)
{
    frac* array = calloc(tam, sizeof(frac));

    if (array == NULL) {
        return array;
    }

    for (int i = 0; i < tam; i++) {
        array[i].num = rand() % 201 - 100;
        array[i].den = rand() % 201 - 100;
    }

    return array;
}

void imprimeArray(frac* array, int tam)
{
    for (int i = 0; i < tam; i++) {
        printf("Fracao %d: N %d, D %d\n", i+1, array[i].num, array[i].den);
    }
}
