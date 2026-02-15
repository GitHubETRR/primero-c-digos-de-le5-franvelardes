
#include <stdio.h>

void cargarGastos(int Tam, int gastosXdia[]);
int sumarGastos(int Tam, int gastosXdia[]);
float promedioGastos(int Tam, int suma); 


int main()
{
   int Tam;
   printf("Ingrese el numero de dias que desees registrar los gastos: ");
   scanf("%d", &Tam);
   
   int gastosXdia[Tam];
   int suma=0;
   float promedio=0;
   
   cargarGastos(Tam, gastosXdia);
   suma=sumarGastos(Tam, gastosXdia);
   promedio=promedioGastos(Tam, suma);  
   
   printf("\nEl gasto total de los %d dias es: %d\n", Tam, suma);
   printf("El promedio de gastos por dia es: %.2f\n", promedio);
   
   return 0;
}


void cargarGastos(int Tam, int gastosXdia[]) {
    for(int i=0; i<Tam; i++) {
       printf("Ingrese gastos del dia %d: ",i+1);
       scanf("%d", &gastosXdia[i]);
    }
}
int sumarGastos(int Tam, int gastosXdia[]) {
    int suma=0;
    for(int i=0; i<Tam; i++) {
        suma=suma+gastosXdia[i];
    }
    return suma;
}

float promedioGastos(int Tam, int suma) {
    return (float)suma/Tam; 
}