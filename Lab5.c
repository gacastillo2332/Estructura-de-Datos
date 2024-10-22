#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 6

int main (){
    char cola[6];
    char dato;
    int i, op, frente = 0, final = 0;
    system("color 3f");

    printf("***********************************Cola Circular******************************\n");
    printf("*******Grupo desarrollador: Andrea Ram%crez, Gabriel Castillo******\n \n",161);
    printf("\n1. Insertar");
    printf("\n2. Eliminar");
    printf("\n3. Salir");
    while (op != 3){
        printf("\nIntroduzca la operaci%cn que desee realizar: ",162);
        scanf("%i",&op);
        if (op == 1){
            fflush(stdin);
            printf("\nIntroduzca los datos: ");
            scanf("%c",&dato);
            
            if ((final == MAX && frente == 1) || (final + 1 == frente)){
                printf("\nError de desbordamiento");
            }
            else if (final == MAX){
                final = 1;
            }
            else {
                final =  final + 1;
            }
            cola[final - 1] = dato;
            if (frente == 0){
                frente = 1;
            }
        }
        else if (op == 2){
            if (frente = 0){
                printf("\nError de subdesbordamiento");
                }
                else {
                    dato = cola[frente];
                    if (frente == final){
                        frente = 0;
                        final = 0;
                    }
                    else if (frente = MAX){
                        frente = 1;
                    }
                    else{
                        frente = frente + 1;
                    }
                }
            }
            printf("\nMax: 6");
            printf("\n\nElementos de la cola circular: ");
            for (i = 0; i < 6; i++){
            printf("\n%c",cola[i]);
        }
        }
}