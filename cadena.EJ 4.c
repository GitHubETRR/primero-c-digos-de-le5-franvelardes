#include <stdio.h>
#include <string.h>

void Invertir(char original[], char invertido[]);


int main() {
    char texto[100];
    char textoInvertido[100];

    printf("Ingrese un texto: ");
    fgets(texto, 100, stdin); // lee la cadena y la guarda en "texto"
    Invertir(texto, textoInvertido);

    printf("Texto original: %s\n", texto);
    printf("Texto invertido: %s\n", textoInvertido);

    return 0;
}


void Invertir(char original[], char invertido[]) {
    int largo=strlen(original);

    for (int i=0; i<largo; i++) {
        invertido[largo-1-i]=original[i];
    }
    invertido[largo]='\0';  // cerrar la cadena
}