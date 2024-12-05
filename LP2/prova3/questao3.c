#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define IMGLIN 10
#define IMGCOL 10

typedef unsigned char uchar;

int guardaImagem(uchar**, int, int, char*);

int main(void)
{
    srand(time(NULL));
    int lin = IMGLIN, col = IMGCOL;
    uchar** img = malloc(lin * sizeof(uchar*));

    for (int i = 0; i < lin; i++) {
        img[i] = calloc(col, sizeof(uchar));

        for (int j = 0; j < col; j++) {
            img[i][j] = rand() % 256;
        }
    }

    guardaImagem(img, lin, col, "arquivo.bin");

    return 0;
}

int guardaImagem(uchar** img, int lin, int col, char* fileName)
{
    FILE* arq;
    arq = fopen(fileName, "wb");

    if (arq == NULL)
        return -1;

    fwrite(&lin, sizeof(int), 1, arq);
    fwrite(&col, sizeof(int), 1, arq);
    fwrite(img, sizeof(uchar), lin * col, arq);


    fclose(arq);
}
