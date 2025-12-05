#include <stdio.h>
#define MAX 10

void cargarVectorA(int A[], int tam);
void cargarVectorB(int B[], int tam);
int productoEscalar(int A[], int B[], int tam);
void mostrarVector(int v[], int tam);



int main()
{
    int A[MAX], B[MAX];
    int tam;
    int resultado;

    do
    {
        printf("Ingrese el tamaño de los vectores (1 a %d): ", MAX);
        scanf("%d", &tam);

        if (tam<1||tam>MAX)
            printf("Tamaño inválido\n");

    } while (tam<1||tam>MAX);

    cargarVectorA(A, tam);
    cargarVectorB(B, tam);

    // Mostrar vectores
    printf("\nVector A: ");
    mostrarVector(A, tam);
    printf("\nVector B: ");
    mostrarVector(B, tam);

    resultado=productoEscalar(A, B, tam);
    printf("\n\nEl producto escalar de A y B es: %d\n", resultado);

    return 0;
}



void cargarVectorA(int A[], int tam)// Cargar vector A
{
    printf("\nCargando vector A:\n");
    for (int i=0; i<tam; i++)
    {
        printf("Ingrese el elemento %d: ", i + 1);
        scanf("%d", &A[i]);
    }
}

void cargarVectorB(int B[], int tam) //cargar vector B
{
    printf("\nCargando vector B:\n");
    for (int i=0; i<tam; i++)
    {
        printf("Ingrese el elemento %d: ", i+1);
        scanf("%d", &B[i]);
    }
}

int productoEscalar(int A[], int B[], int tam)
{
    int suma=0;
    for (int i=0; i<tam; i++)
    {
        suma+=A[i]*B[i];
    }
    return suma;
}

void mostrarVector(int v[], int tam)
{
    for (int i=0; i<tam; i++)
    {
        printf("%d ", v[i]);
    }
}
