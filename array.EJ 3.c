
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 50

void cargarVector(int v[], int tam);
int contarRepeticionesMayor(int v[], int tam);



int main()
{
    int numeros[TAM];
    int repeticiones;
    cargarVector(numeros, TAM);

    printf("Valores generados:\n");
    for (int i=0; i<TAM; i++)
    {
        if (i==TAM-1)
            printf("%d",numeros[i]); //para que el ultimo no tenga la coma
        else
            printf("%d, ",numeros[i]);}

    printf("\n");
    repeticiones= contarRepeticionesMayor(numeros, TAM);

    printf("El mayor numero se repite %d veces.\n", repeticiones);
    return 0;
}



//numeros aleatorios enter 10 y 20
void cargarVector(int v[], int tam)
{
    srand(time(NULL));
    for (int i=0; i<tam; i++)
    {
        v[i]=10+rand()%11;
    }
}

//cuantas veces se repite el mayor num
int contarRepeticionesMayor(int v[], int tam)
{
    int mayor=v[0];
    int contador=0;


    //Encontrar el máximo
    for (int i=1; i<tam; i++)
    {
        if (v[i]>mayor)
            mayor=v[i];
    }

    // Contar veces
    for (int i=0; i<tam; i++)
    {
        if (v[i]==mayor)
            contador++;
    }

    return contador;
}