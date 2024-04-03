/* Escreva um programa que leia os coeficientes de um polinômio de segundo grau na forma
ax2 + bx + c
Calcule as raízes reais do polinômio, se o polinômio não tiver raízes reais uma mensagem de erro  deve ser mostrada. (Utilize a função sqrt() do arquivo de cabeçalho math.h para calcular a raiz  quadrada.)
 */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b, c, delta, x1, x2;

    printf("Digite os tres coeficientes: ");
    scanf("%f %f %f", &a, &b, &c);

    if ( a == 0 ) {
        printf("Nao pode.");
    }
    else {
        delta = (b * b) - (4 * a * c);

        if ( delta < 0 ) {
            printf("Nao ha raizes reais");
        }
        else if ( delta == 0 ) {
            x1 = (-b + sqrt(delta)) / (2 * a);

            printf("Raiz real: %f", x1);
        }
        else {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);

            printf("Raizes reais: %f e %f", x1, x2);
        }
    }

    system("PAUSE");
    return 0;

}
