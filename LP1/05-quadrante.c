/*
Escreva um programa que leia os valores (x; y) de um ponto do
plano e informe no qual quadrante o  ponto se encontra. Utilize o menor n�mero de condi��es poss�veis.
*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int x, y;

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite o valor de y: ");
    scanf("%d", &y);

    if (x > 0)
    {
        if (y > 0)
        {
            printf("O ponto (%d, %d) est� no primeiro quadrante.\n", x, y);
        }
        else
        {
            printf("O ponto (%d, %d) est� no quarto quadrante.\n", x, y);
        }
    }
    else
    {
        if (y > 0)
        {
            printf("O ponto (%d, %d) est� no segundo quadrante.\n", x, y);
        }
        else
        {
            printf("O ponto (%d, %d) est� no terceiro quadrante.\n", x, y);
        }
    }

    system("PAUSE");

    return 0;
}
