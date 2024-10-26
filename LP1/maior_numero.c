#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int num1, num2;

    printf("Forneça um numero inteiro: ");
    scanf("%d", &num1);

    printf("Forneça outro numero inteiro: ");
    scanf("%d", &num2);

    if ( num1 > num2 ) {
        printf("%d é maior que %d", num1, num2);
    }

    if ( num1 < num2 )
    {
        printf("%d é maior que %d", num2, num1);
    }

    if ( num1 == num2 )
    {
        printf("Estes números (%d e %d) são iguais", num2, num1);
    }

    return 0;
}
