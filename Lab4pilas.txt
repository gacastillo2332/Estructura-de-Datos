#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main (){
    char pila [6];
    int i,op,a=0;
    system("color 3f");

    printf("***********************************Pilas******************************\n");
    printf("*******Grupo desarrollador: Andrea Ram%crez, Gabriel Castillo******\n \n",161);
    printf("\n1. Insertar");
    printf("\n2. Eliminar");
    printf("\n3. Salir");
    while (op != 3){
        printf("\nIntroduzca la operaci%cn que desee realizar: ",162);
        scanf("%i",&op);

        if (op == 1){
            if (a >= 6){
                printf("\nError. Hay desbordamiento");
                printf("\nCima: %i",a);
            }
            else {
                fflush(stdin);
                printf("Introduzca los datos: ");
                scanf("%c",&pila[a]);
                a = a + 1;
                printf("\nCima: %i",a);
            }

        }
        else if (op == 2){
            printf("\nSe va a eliminar un dato");
            if (a <= 0){
                printf("\nError. Hay subdesbordamiento");
                printf("\nCima: %i",a);
            }
            else{
                a = a - 1;
                pila[a] = '\0';
                printf("\nCima: %i",a);
            }
        }
        printf("\nMax: 6");
        printf("\n\nElementos de la pila: ");
        for (i = 0; i < 6; i++){
            printf("\n%c",pila[i]);
        }
    }
}
