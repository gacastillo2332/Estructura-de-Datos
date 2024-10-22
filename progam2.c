#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int main(){

int i;
char letra, palabra[50];

printf("El siguiente programa esta hecho para comparar cadenas. \n");
printf("Coloque: \n")
printf("1-Para comparar una secuencia de cadenas a una palabra");
printf("2-Para comparar una secuencia de cadenas a una secuencia de cadena.")


while(op==0||op==1||op==2){
    printf("\nIntroduzca la opci%cn que desee ejecutar: \n",162);
    scanf("%i",&op);

    while(op<1||op>2){
        printf("\nIntroduzca la opci%cn que desee ejecutar: \n",162);
        scanf("%i",&op);
    }
    if(op==1){
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
    }

    }


getch();
return 0;
}
