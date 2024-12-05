#include <stdlib.h>
#include <stdio.h>

typedef unsigned char uchar;

uchar** carregaImagem(int* col, int* lin, char* fileName);
void printaImagem(uchar**, int, int);

int main(void)
{
    int lin, col;
    uchar** img = carregaImagem(&col, &lin, "arquivo.bin");

    printaImagem(img, lin, col);

    return 0;
}

unsigned char** carregaImagem(int* col, int* lin, char* fileName)
{
    FILE* arq;
    arq = fopen(fileName, "rb");

    if (arq == NULL)
        return NULL;

    fread(lin, sizeof(int), 1, arq);
    fread(col, sizeof(int), 1, arq);

    uchar** img = calloc(*lin, sizeof(uchar*));

    if (img == NULL)
        return NULL;

    for (int i = 0; i < *lin; i++) {
        img[i] = calloc(*col, sizeof(uchar));
        fread(img[i], sizeof(uchar), *col, arq);
    }

    fclose(arq);
    return img;
}

void printaImagem(uchar** img, int lin, int col)
{
    printf("%dx%d\n\n", col, lin);

    for (int i = 0; i < lin; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", img[i][j]);
        }
        printf("\n");
    }
}

