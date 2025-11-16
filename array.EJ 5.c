
#include <stdio.h>

#define MAX 10

void cargarVector(int v[], int tam, char nombre);
int productoEscalar(int A[], int B[], int tam);
void mostrarVector(int v[], int tam, char nombre);



int main()
{
    int A[MAX], B[MAX];
    int tam;
    int resultado;

    do //armar los dos vectores
    {
        printf("Ingrese el tamaño de los vectores (1 a %d): ", MAX);
        scanf("%d", &tam);
        if (tam<1 || tam>MAX)
            printf("Tamaño inválido. Intente nuevamente.\n");
    }while(tam<1 || tam>MAX);


    cargarVector(A, tam, 'A');
    cargarVector(B, tam, 'B');


    printf("\nVector A: ");
    mostrarVector(A, tam, 'A');
    printf("\nVector B: ");
    mostrarVector(B, tam, 'B');


    resultado = productoEscalar(A, B, tam);

    //resultado
    printf("\n\nEl producto escalar de A y B es: %d\n", resultado);

    return 0;
}



//cargar vector
void cargarVector(int v[], int tam, char nombre)
{
    printf("\nCargando vector %c:\n", nombre);
    for (int i=0; i<tam; i++)
    {
        printf("Ingrese el elemento %d: ", i+1);
        scanf("%d", &v[i]);
    }
}

//producto escalar
int productoEscalar(int A[], int B[], int tam)
{
    int suma=0;
    for (int i=0; i<tam; i++)
    {
        suma+= A[i]*B[i];
    }
    return suma;
}

// mostrar el vector
void mostrarVector(int v[], int tam, char nombre)
{
    for (int i=0; i<tam; i++)
    {
        printf("%d ", v[i]);
    }
}