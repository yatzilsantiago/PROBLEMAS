/*una persona ahoora el 15% de su salario semanal, el 20% lo destina a pago de producyos y 
servicios, el 50% en comidas y el 15% en diversion. haga un programa en C que iindique 
cuanto destin+o a cada rubro después del mes.

*/

#include<stdio.h>
int main(void){


    float salario;
    printf("introducir salario semanal del trabajador");
    scanf("%f", & salario);

    printf("ahorro:%.2f\n",salario*.15*4);
    printf("salario:%.2f\n",salario*.20*4);
    printf("productos y servicios:%.2f\n",salario*.50*4);
    printf("diversion:%.2f\n",salario*.15*4);

    return 0;




    }