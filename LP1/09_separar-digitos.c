/* 9. Escreva um programa que receba a entrada de um numero inteiro de 5 d�gitos , separe o n�mero em  seus d�gitos componentes e os imprima separados uns dos outros por tr�s espa�os.*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int numero, resto;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if ( 9999 < numero < 100000 ) {
        resto = numero / 10000;
        numero = numero % 10000;

        printf("%i\t", resto);

        resto = numero / 1000;
        numero = numero % 1000;

        printf("%i\t", resto);

        resto = numero / 100;
        numero = numero % 100;

        printf("%i\t", resto);

        resto
         = numero / 10;
        numero = numero % 10;

        printf("%i\t", resto);

        resto = numero / 1;

        printf("%i\t", resto);
    }
    else {
        printf("Este n�mero n�o possui 5 d�gitos.");
    }

    system("PAUSE");
    return 0;

}
