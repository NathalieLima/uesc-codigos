#include <stdio.h>

int troca(char str[], char ch1, char ch2) {
    int trocado = 0; 
    for (int i = 0; str[i] != '\0'; i++) { 
        if (str[i] == ch1) { 
            str[i] = ch2; 
            trocado = 1; 
        }
    }
    return trocado; 
}

int main() {
    char str[] = "caracter";
    char ch1 = 'a';
    char ch2 = 'o';

    int resultado = troca(str, ch1, ch2);

    printf("String resultante: %s\n", str);
    printf("Resultado da troca: %d\n", resultado);

    return 0;
}
