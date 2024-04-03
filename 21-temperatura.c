#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    double tempCelsius, tempFahrenheit;

    printf("Informe a temperatura em Celsius: ");
    scanf("%f", tempCelsius);

    tempFahrenheit = (tempCelsius * 1.8) + 32;

    printf("Temperatura em Celsius: %f\nTemperatura em Fahrenheit: %f", tempCelsius, tempFahrenheit);

    system("PAUSE");
    return 0;
}
