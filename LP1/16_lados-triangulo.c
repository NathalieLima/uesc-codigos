/* 16. Elabore um programa que receba tr�s valores digitados A; B e C informe se estes podem ser os lados  de um tri�ngulo. O ABC � tri�ngulo se A < B + C e B < A + C e C < A + B. */

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    double a, b, c;

    printf("Digite tres numeros quaisquer: ");
    scanf("%f %f %f", a, b, c);

    if ( a < (b + c) && b < (a + c) && c < (a + b) ) {
        printf("Estes podem ser os lados de um triangulo.");
    } else {
        printf("Estes n�o podem ser os lados de um triangulo");
    }

    system("PAUSE");
    return 0;

}
