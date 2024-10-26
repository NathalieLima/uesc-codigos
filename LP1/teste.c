#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num1, num2, soma;

    printf("Entre com o primeiro numero"); //scanf precisa saber como vc vai guardar na memoria, pq n passa a variavel, e sim o endereço de memoria dela
    scanf("%d", &num1);

    printf("Entre com o segundo número");
    scanf("%d", &num2);

    soma = num1 + num2;
    printf("A soma eh %e \n %d \n %x \n", soma, soma, soma);
    printf("Octal: %o \n Exponencial: %e \n Hexadecimal: %x \n Ponto flutuante decimal: %f", soma, soma, soma);
    printf("Caua eh estranho");

    system("PAUSE");

    return 0;

    // dizendo como o numero tem q ser interpretado, como tem q ser guardado. pega valor e converte a esse tipo de dado no %; já no printf é somente para formatação



}
