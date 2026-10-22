#include<stdio.h>
int main(void){

    int edad;
    int edad_limite;
    printf("ingresar edad");
    scanf("%i",&edad);
    printf("ingresar edad limite");
    scanf("%i",&edad_limite);

    if(edad>=edad_limite){
        printf("puede acceder a la sala de cine\n");
        }
    else{
        printf("no puede acceder a la sala de cine\n");
        }
return 0;
 }       