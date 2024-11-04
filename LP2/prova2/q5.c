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
imgGray convert(imgRGB);
void imprimeImageRGB(imgRGB);
void imprimeImageGray(imgGray);

int main(void)
{
    srand(time(NULL));
    imgRGB imageRGB = geraRandomImage(5, 5);
    imgGray imageGray = convert(imageRGB);

    imprimeImageRGB(imageRGB);
    imprimeImageGray(imageGray);

    free(imageRGB.img);
    free(imageRGB._img);
    free(imageGray.img);
    free(imageGray._img);


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

    for (int i = 0; i < (nLin * nCol); i++) {
        image._img[i].R = geraRandomValue();
        image._img[i].G = geraRandomValue();
        image._img[i].B = geraRandomValue();
    }

    for (int i = 0; i < nLin; i++) {
        image.img[i] = calloc(nCol, sizeof(tRGB));

        for (int j = 0; j < nCol; j++) {
            tRGB pixel;
            pixel.R = geraRandomValue();
            pixel.G = geraRandomValue();
            pixel.B = geraRandomValue();
            image.img[i][j] = pixel;
        }
    }

    return image;
}

imgGray convert(imgRGB image)
{
    imgGray imageGray;
    int lin = image.nLin, col = image.nCol;
    imageGray.nLin = lin;
    imageGray.nCol = col;
    imageGray._img = NULL;
    imageGray.img = NULL;

    imageGray._img = (uchar*)calloc(lin * col, sizeof(uchar));
    imageGray.img = (uchar**)calloc(lin, sizeof(uchar*));

    if (imageGray._img == NULL || imageGray.img == NULL)
        return imageGray;


    //indexar matriz
    for (int i = 0; i < lin; i++){
        imageGray.img[i] = &imageGray._img[i*col];
    }

    //converter vetor
    for (int i = 0; i < (lin * col); i++) {
        imageGray._img[i] = image._img[i].R * 0.299 + image._img[i].G * 0.587 + image._img[i].B * 0.114;
    }

    return imageGray;
}

void imprimeImageRGB(imgRGB image) {
    printf("Matriz %dx%d RGB\n", image.nLin, image.nCol);

    for (int i = 0; i < image.nLin; i++) {
        for(int j = 0; j < image.nCol; j++) {
            printf("(%03d, %03d, %03d) ", image.img[i][j].R, image.img[i][j].G, image.img[i][j].B);
        }
        printf("\n");
    }
}

void imprimeImageGray(imgGray image) {
    printf("\nMatriz %dx%d Gray\n", image.nLin, image.nCol);

    for (int i = 0; i < image.nLin; i++) {
        for(int j = 0; j < image.nCol; j++) {
            printf("%03d ", image.img[i][j]);
        }
        printf("\n");
    }
}
