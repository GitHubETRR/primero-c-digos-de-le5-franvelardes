
#include <stdio.h>
#include <string.h>

int Dimension(char texto[]);


int main() {
    char texto[100];
    int largo;

    printf("Ingrese un texto: ");
    fgets(texto, 100, stdin); //lee la cadena y la guarda en "texto"                  
    
    largo=Dimension(texto);

    printf("El largo del texto es: %d\n", largo);

    return 0;
}


int Dimension(char texto[]) {
    return strlen(texto); //strlen cuenta la cantidad de caracteres que tiene la cadena
}