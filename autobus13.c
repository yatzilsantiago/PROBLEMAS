#include <stdio.h>
int main(void){
    int personas,autobus;
    float kilometros,costo,total;

    printf("tipos de autobus:");
    printf("[1].-tipo A($2.0*kilometro");
    printf("[2].-tipo B($2.50*kilometro");
    printf("[3].-tipo C($3.0*kilometro\n");

    printf("\nseleccionar el autobus de su eleccion:");
    scanf("%d",&autobus);

    printf("kilometros recorridos:");
    scanf("%f",&kilometros);

    printf("numero de pasajeros: ");
    scanf("%d",&personas);

    if(personas<20){
        printf("no cumple con el minimo de personas.\n");
        personas=20;
    }
    switch (autobus){
        case 1:
            costo=2;
            break;

        case 2:
            costo=2.50;
            break;
 
        case 3:
            costo=3.0;
            break;

        default:
            printf("tipo de autobus no disponible\n");
    }
    total=kilometros*costo*personas;

    printf("\nEl costo total del viaje es: $%.2f\n",total);
    printf("El costo por persona es: $%.2f\n",total/personas);


return 0;
}