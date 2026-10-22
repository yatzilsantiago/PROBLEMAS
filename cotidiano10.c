#include<stdio.h>
int main(void){
    int dinero, tienda, tiempo;
    printf("tienes dinero? (1=si, 0=no):");
    scanf("%i", &dinero);    

    printf("tienes tiempo? (1=si, 0=no):");
    scanf("%i",&tiempo);

    printf("la tienda esta abierta? (1=si, 0=no):");
    scanf("%i",&tienda);
    if(dinero==0) {
        printf("no puedes comprar, no te alcanza");
    }
    else{
        if(tiempo==0){
            printf("no tienes tiempo");
        }
        else{
            if(tienda== 1 && dinero==1){
                printf("puedes ir a la tienda");
            }
            else
            if(tienda==0 || tiempo==0)
        {
                printf("no puedes ir a la tenda");
        }
            else{
                printf("resivar condicionales");
            }
        }
    }   
    return 0;


}
