#include <stdio.h>
#include <conio.h>
#include <stdlib.h> //librería para la función new y delete
#include <iostream>
using namespace std;

int main(){
char opc;

do {
system("cls");
printf("Que desea hacer?\n\n");

printf("a. Crear la matriz cuadrada\n");
printf("b. Cargar la matriz con los valores del ejercicio\n");
printf("c. Validar aristas\n");
printf("d. Validar nodos adyacentes\n");
printf("e. Salir\n");

scanf("%c",&opc);

switch (opc)
{
case 'a':
case 'A':
    
    break;

case 'b':
case 'B':
    
    break;

case 'c':
case 'C':
    
    break;

case 'd':
case 'D':
    
    break;

case 'e':
case 'E':
    return 0;
    break;



default:
    printf("Ingrese una opcion valida\n");
    break;
}
} while((opc != 'e') || (opc != 'E'));



return 0;    
}