
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100

void cargarVector(int v[], int tam);
void buscarMaxMin(int v[], int tam, int *max, int *min);
void mostrarPosicionesMax(int v[], int tam, int max);



int main()//MAIN

{
    int numeros[TAM];
    int max, min;

    srand(time(NULL));

    cargarVector(numeros, TAM);
    buscarMaxMin(numeros, TAM, &max, &min);
    printf("Valor máximo: %d\n", max);
    printf("Valor mínimo: %d\n", min);
    
    mostrarPosicionesMax(numeros, TAM, max);


    return 0;
}


//vector numeros randoms
void cargarVector(int v[], int tam)
{
    for (int i=0; i<tam; i++)
    {
        v[i]=10+rand()%31;
    }
}

//maximos y minimos
void buscarMaxMin(int v[], int tam, int *max, int *min)
{
    *max=v[0];
    *min=v[0];

    for(int i=1; i<tam; i++)
    {
        if (v[i]>*max)
            *max=v[i];
        if (v[i]<*min)
            *min=v[i];
    }
}

//posiciones de los maximos
void mostrarPosicionesMax(int v[], int tam, int max)
{
    printf("El valor máximo (%d) se repite en las posiciones: ", max);
    for (int i=0; i<tam; i++)
    {
        if (v[i]==max)
            printf("%d ",i);
    }
    printf("\n");
}
