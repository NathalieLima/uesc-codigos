#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num1, num2, soma, subtracao, multiplicacao, divisao, resto;

    printf("Entre com um numero inteiro: ");
    scanf("%d", &num1);

    printf("Entre com outro numero inteiro: ");
    scanf("%d", &num2);

    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;
    divisao = num1 / num2;
    resto = num1 % num2;

    printf("\n\tIMPRESSÃO DOS RESULTADOS\n\nSoma: %d\nSubtracao: %d\nMultiplicacao: %i\nDivisao: %d\nResto: %i", soma, subtracao, multiplicacao, divisao, resto);
}
