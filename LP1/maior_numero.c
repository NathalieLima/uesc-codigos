#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int num1, num2;

    printf("Forne�a um numero inteiro: ");
    scanf("%d", &num1);

    printf("Forne�a outro numero inteiro: ");
    scanf("%d", &num2);

    if ( num1 > num2 ) {
        printf("%d � maior que %d", num1, num2);
    }

    if ( num1 < num2 )
    {
        printf("%d � maior que %d", num2, num1);
    }

    if ( num1 == num2 )
    {
        printf("Estes n�meros (%d e %d) s�o iguais", num2, num1);
    }

    return 0;
}
