/* Escreva um programa que leia um n�mero inteiro e imprima-o em representa��o decimal, octal e  hexadecimal.
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
