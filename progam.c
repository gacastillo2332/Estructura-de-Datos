/*
Nombre: Gabriel Castillo
*/
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int main(){

int i, tam, posicion;
char letra, palabra[50];

    printf("Programa de busquueda de caracter. \n");
    printf("Desarrollado por: Gabriel Castillo \n");

    fflush(stdin);
    printf("\nIntroduzca una cadena: ");
    gets(palabra);
    printf("Introduzca la letra que desea buscar de la cadena que escribi%c: ",162);
    letra = getchar();

    if (strchr(palabra,letra) == NULL){
        printf("\nEsa palabra no contiene esa letra.\n");
    }
    else{
        printf("\nEsta palabra s%c contiene esta letra",161);
        tam = strlen(palabra);
        for(i = 0; i < tam; i++){
            if (palabra[i] == letra){
                posicion = i;
                printf(" en la posicion %i.",posicion+1);
                }
            }

    }





getch();
return 0;
}
