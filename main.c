
#include <stdio.h>

void cargarGastos(int Tam, int gastosXdia[]);
int sumarGastos(int Tam, int gastosXdia[]);

int main()
{
   int Tam;
   printf("Ingrese el numero de dias que desees registrar los gastos:");
   scanf("%d",&Tam);
   
   int gastosXdia[Tam];
   int suma=0;
   
   cargarGastos(Tam, gastosXdia);
   suma=sumarGastos(Tam, gastosXdia);
   printf("\nEl gasto total de los %d dias es: %d\n",Tam,suma);
   return 0;
   
}
void cargarGastos(int Tam, int gastosXdia[]){
    for(int i=0;i<Tam;i++){
       printf("ingrese gastos dia: %d\n",i+1);
       scanf("%d", &gastosXdia[i]);
    }
}

int sumarGastos(int Tam, int gastosXdia[]) {
    int suma=0;
    for(int i=0;i<Tam;i++){
        suma=suma+gastosXdia[i];}
    return suma;
}