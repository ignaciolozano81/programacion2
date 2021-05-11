#include <iostream>
#include <stdio.h> 
#include <conio.h>
#include <stdlib.h>

using namespace :: std;

int numarreglo, *arreglo;

void crear_arreglo();
void mostrar_arreglo();

int main(){

crear_arreglo();




mostrar_arreglo();

delete [] arreglo;

return 0;
}

void crear_arreglo(){
    
    printf("Digite el numero de elemantos del arreglo: ");
    scanf("%d",&numarreglo);

    arreglo = new int[numarreglo];

    for(int i = 0; i<numarreglo; i++){

        arreglo[i] = i; 

    }

}

void mostrar_arreglo(){
    system("cls");

    for(int i = 0 ; i<numarreglo; i++){

        printf("Espacio (vertice) - %d\n\n", arreglo[i]);

    }

}