#include <stdio.h>
int main (void){
    char tipo;
    int tamaño;
    float precio,kilos,total;

    printf("ingresar el tipo de uva (A o B): ");
    scanf("%c",&tipo);

    printf("ingresar el tamaño de la uva(1 o 2): ");
    scanf("%d",&tamaño);
     
    printf("ingresar precio inicial por kilo: ");
    scanf("%f",&precio);

    printf("ingresar kilos de uva:");
    scanf("%f",&kilos);

    if(tipo=='A'){
        switch (tamaño){
            case 1:
                precio=precio+0.02;
                break;
            case 2:
                precio=precio+0.30;
                break;            
             
        }
    }
    else if(tipo=='B'){
        switch (tamaño){
            case 1:
                precio=precio-0.30;
                break;
            case 2:
                precio=precio-0.50;
                break;
    
        }
    }
    total= precio*kilos;
    printf("\nprecio final por kilo: $%.2f\n",precio);
    printf("la ganancia total es: $%.2f\n",total);

    return 0;
}