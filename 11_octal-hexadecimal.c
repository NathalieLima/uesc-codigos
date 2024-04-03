/* Escreva um programa que leia um número inteiro e imprima-o em representação decimal, octal e  hexadecimal.
*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int numero;

    printf("Digite um numero: ");
    scanf("%i", &numero);

    printf("Decimal: %d\nOctal: %o\nHexadecimal: %x", numero, numero, numero);

    system("PAUSE");
    return 0;
}
