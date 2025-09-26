#include <stdio.h>

int main()
{
    int mesActual, mesNac;
    int anioActual, anioNac;
    int diaActual, diaNac;
    int edad;
    
    do{
        printf("Ingrese el año actual: ");
        scanf("%d", &anioActual);
        printf("Ingrese el mes actual (1-12): ");
        scanf("%d", &mesActual);
        printf("Ingrese el día actual (1-31): ");
        scanf("%d", &diaActual);
        
        //verfica la fecha actual
        if (mesActual<1||mesActual>12||diaActual<1||diaActual>31){
            printf("La fecha actual invalida. Intente de nuevo \n");
        }
    }while (mesActual<1||mesActual>12||diaActual<1||diaActual>31);
    
    
    do{
        printf("\nIngrese su año de nacimiento: ");
        scanf("%d", &anioNac);
        printf("Ingrese su mes de nacimiento (1-12): ");
        scanf("%d", &mesNac);
        printf("Ingrese su día de nacimiento (1-31): ");
        scanf("%d", &diaNac);
        
        //verfica la fecha de nacimiento
        if(mesNac<1||mesNac>12||diaNac<1||diaNac>31){
            printf("La fecja de nacimiento invalida. Intente de nuevo \n");
        }
        
        if ((anioNac>anioActual)||
            (anioNac==anioActual&&mesNac>mesActual)||
            (anioNac==anioActual && mesActual==mesNac && diaNac>diaActual)) {
            printf("La fecha de nacimiento no puede ser mayor que la actual. Intente de nuevo \n");
            mesNac=100; //al cambiar el mes de nacimiento por uno indevido, vuelve a repreguntar la fecha de nacimiento
            }
            
    } while (mesNac < 1 || mesNac > 12 || diaNac < 1 || diaNac > 31 ||
             (anioNac > anioActual) ||
             (anioNac == anioActual && mesNac > mesActual) ||
             (anioNac == anioActual && mesNac == mesActual && diaNac > diaActual));
             
    edad = anioActual-anioNac;
    if (mesActual<mesNac||(mesActual==mesNac && diaActual<diaNac)) {
        edad=edad-1;
    }

    printf("Su edad es: %d años", edad);
    return 0;
    
}

    