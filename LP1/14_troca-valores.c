/* Elabore um programa que permita a entrada de dois valores, x e y, troque seus valores entre si e  ent�o exiba os novos resultados.
*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int x, y, intermediario;

    printf("Numeros fornecidos: %d e %d", x, y);

    intermediario = x;
    x = y;
    y = intermediario;

    printf("N�meros trocados: %d e %d", x, y);

    return 0;
}
