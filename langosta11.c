/* La langosta ahumada es una empresa dedicada a ofrecer banquetes, las tarifas son las siguientes: el costo por persona
es de $95, pero si el numero de personas esmayor a 200 pero menor o igual a 300, para más de 300 personas el costo del 
platillo por persona es de $75, haz un programa en c que calcule el costo de n personas */

#include <stdio.h>
int main (void){
    int personas;
    float costopersona, costototal;

    printf("ingrese el numero de personas:");
    scanf("%d",&personas);

    if(personas<=0){
        printf("error, ingersar un numero valido.\n");
    } else{
        if(personas>300){
            costopersona=75;
        
    } else if(personas>200&&personas<300){
                costopersona=85;

    }  else{
            costopersona=95;
    }
    costototal=personas*costopersona;
    printf("numero de personas:%d\n",personas);
    printf("costo por persona:$%.2f\n",costopersona);
    printf("costo total del platillo:$%.2f\n",costototal);
}
    return 0;
}

