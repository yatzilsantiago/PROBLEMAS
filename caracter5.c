#include <stdio.h>
int main(void){

    char caracter;
    float flotante;
    int entero; 


        printf("ingersar un caracter:");
        scanf("%c", &caracter);

        printf("ingresar un numero flotante:");
        scanf("%f", &flotante);
        
        printf("ingersar un numero entero:");
        scanf("%d", &entero);

        printf("caracter: %c\n", caracter);
        printf("flotante: %.2f\n", flotante);
        printf("entero: %d\n", entero);

return 0;

}
