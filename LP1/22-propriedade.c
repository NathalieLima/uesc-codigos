#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int numero, parte1, parte2;

    if (numero < 1000 && numero < 10000)
    {
        parte1 = numero / 100;
        parte2 = numero % 100;
        soma = parte1 + parte2;

        potencia = soma ** 2;

        if ( potencia == numero ) {
            printf("O numero possui essa propriedade.");
        }
        else {
            printf("O numero nao possui essa propriedade.");
        }
    }
    else
    {
        printf("Digite um numero de quatro digitos.");
    }

    system("PAUSE");
    return 0;
}
