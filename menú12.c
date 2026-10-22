#include <stdio.h>
int main(void){
    int p;
    printf("[1].-pizza sencilla\n");
    printf("[2].-pizza mediana\n");
    printf("[3].-pizza familia\n");
    printf("[4].-pizza jumbo\n");

    scanf("%i",&p); 


    switch(p){
        case 1:
            printf("precio de la pizza es 100\n");
            break;
        case 2:
            printf("precio de pizza 150\n"); 
            break;
        case 3:
            printf("precio de la pizza es 200\n");
            break;
        case 4:
            printf("precio de la pizza es 250\n");
            break;
        default:
            printf("no existe esa opcion\n");
        }
    printf("gracias por tu compra\n");

return 0;
}