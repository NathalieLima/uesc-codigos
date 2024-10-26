#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    const double pi = 3.14;
    double raio, diametro, circunferencia, area;

    printf("Insira o raio de um circulo: ");
    scanf("%f", &raio);

    if ( raio < 0 ) {
        printf("Este raio não existe.");

        return 0;
    }

    diametro = raio ** 2;
    circunferencia = 2 * pi * raio;
    area = pi * (raio ** 2);

    printf("Raio: %f\nDiametro: %f\nCircunferencia: %f\nArea: %f\n", raio, diametro, circunferencia, area);


    return 0;
}
