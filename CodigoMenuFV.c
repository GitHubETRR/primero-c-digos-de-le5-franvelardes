#include <stdio.h>
#include <stdlib.h> //para el caso 1 (preguntar a isi)
#include <time.h>

void AdivinarNumero();
void InvertirNum();
void Salir();



int main()
{int Var1;

    printf("1 - Adivinar el numero\n");
    printf("2 - Invertir numero\n");
    printf("3 - Salir\n");
    printf("¿Que opcion eliges?: ");
    scanf("%d", &Var1);

    switch(Var1) {
    case 1: 
    {
        AdivinarNumero();
        break;
    }
    case 2:
    {
        InvertirNum();
        break; //ARREGLAR PARA MAS DE 10 DIGITOS
    }
    case 3: 
    {
        Salir();
        break;
    }
    default:
        printf("Opción inválida.\n");
        break;
    }

    return 0;
}




void AdivinarNumero() //CASO 1
{
    int NumeroSecreto, intento;
        
        srand(time(NULL));
        NumeroSecreto=rand()%100 + 1; //como funciona
        
        printf("Pensé un numero aleatorio entre 1 y 100\n");
        do {
            
            printf("ingresa un numero: ");
            scanf("%d",&intento);
            
            if (intento==NumeroSecreto) {
                printf("Adivinaste!\n");
                
            } else if (intento>NumeroSecreto){
                printf("Menor\n");
                
            } else {
                    printf("Mayor\n");
                }
            
        }while (intento != NumeroSecreto);
}


void InvertirNum() //CASO 2
{
    int numero, numeroInvertido = 0, digito;

        printf("Ingresa un numero: ");
        scanf("%d", &numero);

        for (; numero > 0; numero = numero / 10) {
            digito = numero % 10;
            numeroInvertido = numeroInvertido * 10 + digito;
        }
        printf("El numero invertido es: %d\n", numeroInvertido);
}


void Salir() //CASO 3
{
    printf("Saliendo del programa...\n");
}
