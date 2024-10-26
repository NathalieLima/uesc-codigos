#include <stdio.h>

int inverte(float vet[], int n) {
    int temZero = 0; 

    for (int i = 0; i < n; i++) {
        if (vet[i] == 0) {
            vet[i] = 1E10;
            temZero = 1; 
        } else {
            vet[i] = 1.0 / vet[i]; 
        }
    }

    return temZero;
}

void printArray(float vet[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%.2f ", vet[i]);
    }
    printf("\n");
}

int main() {
    float vetor[] = {2.0, 0.0, -3.0, 4.0, 0.5};
    int tamanho = 5;

    int resultado = inverte(vetor, tamanho);
    printf("Array invertido: ");
    printArray(vetor, tamanho);
    printf("Resultado da inversão (0 = nenhum zero, 1 = pelo menos um zero): %d\n", resultado);

    return 0;
}
