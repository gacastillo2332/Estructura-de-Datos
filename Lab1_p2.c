#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float resta(float num);


int main(){
int op, tam;
float num, tot;
char palabra[50];

printf("*********Validaci%cn de tipos de datos primitivos***********\n",162);
printf("***Grupo desarrollador: Andrea Ram%crez, Gabriel Castillo***\n",161);
printf("Opciones: \n");
printf("1-Datos tipo Num%cricos\n",130);
printf("2-Datos tipo caracter\n");
printf("3-Salir\n \n");

op=0;
/*printf("op= %i",op);*/
while(op==0||op==1||op==2){
    printf("\nIntroduzca la opci%cn que desee ejecutar: \n",162);
    scanf("%i",&op);

    while(op<1||op>3){
        printf("\nIntroduzca la opci%cn que dese ejecutar: \n",162);
        scanf("%i",&op);
    }


    if(op==1){
        //printf("opcion 1");
        printf("Introduce el dato num%crico a validar (si el dato es un decimal escr%cbalo con punto): \n",130,161);
        scanf("%f",&num);
        /*
        num1=num;
        tot=num-num1;
        */
        tot=resta(num);

        if(tot==0){
            printf("El d%cgito ingresado es un numero entero. \n",161);
        }
        else if(tot<0||tot>0)
        {
            printf("El d%cgito ingresado es un numero real. \n",161);
        }

    }
    else if(op==2){
        //printf("opcion 2");
        fflush(stdin);
        printf("Introduce el car%ccter o la secuencia de caracteres: \n",160);
        gets(palabra);

        tam=strlen(palabra);

        //printf("El tamanio de el caracter es de: %i",tam);

        if(tam==1){
            printf("El dato introducido es un car%ccter. \n",160);
        }
        else if(tam>1){
            printf("El dato introducido es una secuencia de caracteres. \n");
        }
    }
    else{
        printf("\nSalir... \n");
    }
}
return 0;
}

float resta(float num){
int num1;
float tot1;

num1=num;
tot1=num-num1;

return(tot1);
}
