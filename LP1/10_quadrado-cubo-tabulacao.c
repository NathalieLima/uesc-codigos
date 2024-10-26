/* Escreva um programa que calcule o quadrado e o cubo dos números do 1 ao 10 e use tabulações para  imprimir o resultado da seguinte forma:
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
