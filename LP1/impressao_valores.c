/*
int notacai cien
float 2 casas
char int e char

*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int numInt;
    char caractere;
    float numFloat;

    //printf("Entre com um valor do tipo int: ");
    //scanf("%d", &numInt);



    printf("Entre com um valor do tipo char: ");
    caractere = getchar();
    //scanf("%c", &caractere);

    //fflush(stdin);
    printf("Entre com um valor do tipo char: ");
    caractere = getchar();
    //scanf("%c", &caractere);

    printf("Entre com um valor do tipo float: ");
    scanf("%f", &numFloat);


    printf("IMPRESSÃO DE VALORES\nChar: %c | %i\nInt: %e\nFloat: %.2f", caractere, caractere, numInt, numFloat);


}
