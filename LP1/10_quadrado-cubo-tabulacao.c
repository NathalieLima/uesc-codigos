/* Escreva um programa que calcule o quadrado e o cubo dos n�meros do 1 ao 10 e use tabula��es para  imprimir o resultado da seguinte forma:
*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    printf("NUMERO\tQUADRADO\tCUBO");

    for (int i = 1; i <= 10; i++)
    {
        printf("\n%i\t%i\t%i", i, (i * i), (i * i * i));
    }

    return 0;

}
