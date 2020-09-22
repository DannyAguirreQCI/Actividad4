#include <stdio.h>

int main(){
    int arreglo[5],opcion,suma,suma2,contador,promedio,n;
    char caracter[20];

    while(opcion!=7)
    {
        printf("\n ----MENU----\n");
        printf(" 1. Llenar el arreglo\n 2. Mostrar el arreglo\n 3. Sumar datos del arreglo y mostrar el total\n 4. Mostrar el promedio\n 5. Mostrar n veces un arreglo\n 6.Configuracion de personajes\n 7.SALIR\n Elige tu opcion: ");
        scanf("%i",&opcion);
    }