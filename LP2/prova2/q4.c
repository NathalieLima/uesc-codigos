#include <stdlib.h>
#include <stdio.h>
#include <time.h>

typedef unsigned char uchar;

// Estrutura de um pixel em RGB
typedef struct {
    uchar R, G, B;
} tRGB;

typedef struct {
    uchar *_img;
    uchar **img;
    int nLin, nCol;
} imgGray;

typedef struct {
    tRGB *_img;
    tRGB **img;
    int nLin, nCol;
} imgRGB;

/*Implemente a função imgRGB geraRandomImage(int nLin, int nCol),
que aloca uma imagem de nLin linhas e nCol colunas e preencha
ela com valores gerados de forma aleatória.
*/

int geraRandomValue();
imgRGB geraRandomImage(int, int);
void imprimeImage(imgRGB);

int main(void)
{
    srand(time(NULL));
    imgRGB image = geraRandomImage(5, 5);
    imprimeImage(image);

    free(image.img);
    free(image._img);

    return 0;
}

int geraRandomValue() {
    return rand() % 256;
}

imgRGB geraRandomImage(int nLin, int nCol)
{
    imgRGB image;
    image.nLin = nLin;
    image.nCol = nCol;
    image._img = NULL;
    image.img = NULL;

    image._img = calloc(nLin * nCol, sizeof(tRGB));
    image.img = calloc(nLin, sizeof(tRGB*));

    if (image._img == NULL || image.img == NULL)
        return image;
        
    //indexar matriz
    for (int i = 0; i < nLin; i++) {
        image.img[i] = &image._img[i*nCol];
    }

    //preencher vetor
    for (int i = 0; i < (nLin * nCol); i++) {
        image._img[i].R = geraRandomValue();
        image._img[i].G = geraRandomValue();
        image._img[i].B = geraRandomValue();
    }

    return image;
}

void imprimeImage(imgRGB image) {
    printf("Array %d\n", image.nLin * image.nCol);

    for (int i = 0; i < (image.nLin * image.nCol); i++) {
        printf("Pixel %d: R%d G%d B%d\n", i+1, image._img[i].R, image._img[i].G, image._img[i].B);
    }

    printf("\nMatriz %dx%d\n", image.nLin, image.nCol);

    for (int i = 0; i < image.nLin; i++) {
        for(int j = 0; j < image.nCol; j++) {
            printf("Pixel %dx%d: R%d G%d B%d\n", i+1, j+1, image.img[i][j].R, image.img[i][j].G, image.img[i][j].B);
        }
        printf("\n");
    }

}
