/* Elabore um programa que calcule e exiba a média de três números fornecidos pelo usuário.*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    float num1, num2, num3, media;

    printf("Digite tres numeros: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    media = (num1 + num2 + num3) / 3;

    printf("Media dos numeros fornecidos: %f\n", media);

    system("PAUSE");
    return 0;
}
