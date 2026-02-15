
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 20



void CargarVector(int v[]);
void InvertirVector(int original[], int invertido[]);
void MostrarVector(int v[]);

int main() {
    int vectorOriginal[TAM];
    int vectorInvertido[TAM];

    srand(time(NULL));

    CargarVector(vectorOriginal);
    InvertirVector(vectorOriginal, vectorInvertido);

    printf("Vector original:\n");
    MostrarVector(vectorOriginal);

    printf("\nVector invertido:\n");
    MostrarVector(vectorInvertido);

    return 0;
}



void CargarVector(int v[]) {
    for (int i=0; i<TAM; i++) {
        v[i]=rand() % (90-20+1) +20;
    }
}

void InvertirVector(int original[], int invertido[]) {
    for (int i=0; i<TAM; i++) {
        invertido[TAM-1-i] = original[i];
    }
}

void MostrarVector(int v[]) {
    for (int i=0; i<TAM; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}