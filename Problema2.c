//NOMBRE: GABRIEL CASTILLO
//CEDULA: 8-983-725


#include <stdio.h>
#include<stdlib.h>

int q(int a, int b);

int main(){
int a, b, valor;


printf("Introduce el valor de A: ");
scanf("%i",&a);

while(a<0){
    system("cls");
    printf("Introduce el valor de A correctamente: ");
    scanf("%i",&a);
}

printf("Introduce el valor de B: ");
scanf("%i",&b);

while(b<0){
    system("cls");
    printf("Introduce el valor de B correctamente: ");
    scanf("%i",&b);
}

valor=q(a,b);

printf("Valor de a y b es de: %i",valor);

return 0;
}

int q(int a, int b){

    if(a<b){
        return 0;
    }
    else if(b<=a){
        return(q(a-b,b)+1);
    }
return 2332;
}
