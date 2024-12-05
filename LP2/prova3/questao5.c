#include <stdlib.h>
#include <stdio.h>

int contaCaracteres(const char *nomeArquivo) {
    FILE *arq = fopen(nomeArquivo, "r");
    if (arq == NULL) {
        perror("Erro ao abrir o arquivo");
        return -1;
    }

    int contador = 0;
    char c;

    while ((c = fgetc(arq)) != EOF) {
        contador++;
        if (contador > 1200) {
            fclose(arq);
            return 0;
        }
    }

    fclose(arq);
    return contador;
}

int main() {
    const char *nomeArquivo = "arquivo.txt";
    int resultado = contaCaracteres(nomeArquivo);

    if (resultado == -1) {
        printf("Erro ao ler o arquivo.\n");
    } else if (resultado == 0) {
        printf("O resumo excede o limite de 1200 caracteres.\n");
    } else {
        printf("O resumo possui %d caracteres.\n", resultado);
    }

    return 0;
}

