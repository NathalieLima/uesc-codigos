#include <stdio.h>

int inverteR(float vet[], int n) {
    if (n == 0) return 0; 
    
    int temZero = (vet[n - 1] == 0); 
    if (temZero) {
        vet[n - 1] = 1E10; 
    } else {
        vet[n - 1] = 1.0 / vet[n - 1]; 
    }

    return temZero || inverteR(vet, n - 1); 
}

int main() {
    float vetor[] = {2.0, 0.0, -3.0, 4.0, 0.5};
    int tamanho = 5;

    int resultado = inverteR(vetor, tamanho);
    printf("Array invertido recursivamente: ");
    printArray(vetor, tamanho);
    printf("Resultado da inversão (0 = nenhum zero, 1 = pelo menos um zero): %d\n", resultado);

    return 0;
}
