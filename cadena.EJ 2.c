
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void pasaMinuscula(char texto[]);


int main() {
    char texto[100];

    printf("Ingrese un texto: ");
    fgets(texto, 100, stdin);
    pasaMinuscula(texto);
    printf("Texto en minuscula: %s", texto);
    return 0;
}


void pasaMinuscula(char texto[]) {
    int i;
    for(i=0; texto[i]!= '\0'; i++) {
        texto[i]=tolower(texto[i]);   //funcion de la libreria ctype
    }

}
