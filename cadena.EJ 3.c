
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void pasaMinuscula(char texto[]);
int vocales(char v[]);


int main() {
    char texto[100];
    int vocal;

    printf("Ingrese un texto: ");
    fgets(texto, 100, stdin);

    pasaMinuscula(texto);
    vocal=vocales(texto);

    printf("Texto en minuscula: %s", texto);
    printf("cantidad de vocales: %d\n", vocal);

    return 0;
}


void pasaMinuscula(char texto[]) {
    int i;
    for(i=0; texto[i]!= '\0'; i++) {
        texto[i] = tolower(texto[i]); //funcion de la libreria ctype
    }
}

int vocales(char v[]){
    int i,cont=0;
    for(i=0; v[i]!='\0'; i++){
        if(v[i]=='a'||v[i]=='e'||v[i]=='i'||v[i]=='o'||v[i]=='u'){
            cont++; // se suma 1 si es vocal
        }
    }
    return cont;
}