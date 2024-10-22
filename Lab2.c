#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int main(){
int op;
int i, tam, posicion;
char palabra[50];
char cadena1[50];
char cadena2[50];
char cadena3[50];
char letra;
system("color 3F");
printf("\n\t\t\tFunciones de Cadena\n",162);
printf("\n\tGrupo desarrollador: Andrea Ram%crez, Gabriel Castillo***\n",161);
printf("\nOpciones:\n");
printf("\n1-Calcular la longitud de una cadena cualquiera\n");
printf("2-Copiar una cadena en otra\n");
printf("3-Concatenar tres cadenas y calcular su longitud\n");
printf("4-Comparar dos cadenas\n");
printf("5-Buscar un caracter en una cadena cualquiera\n");
printf("6-Salir\n \n");

op=0;
/*printf("op= %i",op);*/
while(op==0||op==1||op==2||op==3||op==4||op==5){
    printf("\nIntroduzca la opci%cn que desee ejecutar: \n",162);
    scanf("%i",&op);

    while(op<1||op>6){
        
        printf("\nIntroduzca la opci%cn que desee ejecutar: \n",162);
        scanf("%i",&op);
    }
    if (op == 1){
        system ("cls");
        fflush(stdin);
        printf("\nIntroduzca una cadena: ");
        gets(palabra);
        printf("\nLa longitud de la cadena es de: %i\n",strlen(palabra));
        system ("pause");
        system ("cls");
    }
    else if (op == 2){
        fflush(stdin);
        printf("\nIntroduzca la cadena 1: ");
        gets(cadena1);
        printf("\nIntroduzca la cadena 2: ");
        gets(cadena2);
        printf("\nLa cadena original es: %s",cadena2);
        printf(" y la cadena copiada es: %s\n", strcpy(cadena2,cadena1));
    }
    else if (op == 3){
        fflush(stdin);
        printf("\nIntroduzca la cadena 1: ");
        gets(cadena1);
        printf("\nIntroduzca la cadena 2: ");
        gets(cadena2);
        printf("\nIntroduzca la cadena 3: ");
        gets(cadena3);
        strcat(cadena1, " ");
        strcat(cadena1,cadena2);
        strcat(cadena1,cadena3);
        printf("\nLa palabra concatenada es: %s\n",cadena1);
    }
    else if(op == 4){
        fflush(stdin);
        printf("\nIntroduzca la cadena 1: ");
        gets(cadena1);
        printf("\nIntroduzca la cadena 2: ");
        gets(cadena2);
            if (strcmp(cadena1,cadena2) == 0){
            printf("\nSon de iguales\n");
            }
            else{
                printf("\nNo son de iguales\n");
            }
    }
    else if (op == 5){
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
    else{
        printf("\nSalir... \n");
    }
}
getch();
return 0;
}