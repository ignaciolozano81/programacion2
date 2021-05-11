#include <iostream>
#include <stdio.h> 
#include <conio.h>
#include <stdlib.h>

using namespace :: std;

struct Nodo
{
   int dato;
   Nodo *siguiente;
} *primero, *ultimo;

void insertar_nodo();
void imprimir_lista();

int main(){

    insertar_nodo();
    insertar_nodo();
    imprimir_lista();
    getch();
    return 0;
}

void insertar_nodo(){

    Nodo *nuevo = new Nodo();               //creamos el nuevo nodo
    printf("Ingrese el valor del nodo: ");  //pedimos que ingrese el valor del nodo
    scanf("%d",&nuevo->dato);                // se guarda en el nuevo nodo

    if(primero == NULL){                    //si el primer nodo es diferente a NULL
        primero = nuevo;                   //el nuevo pasa a ser el primero
        primero->siguiente = NULL;          // por lo tanto el primero ahora apunta a NULL
        ultimo = nuevo;                     //el ultimo también es igual a nuevo
    }
    else{                                   // sino (primero es distino a NULL o sea que ya tiene datos)
        ultimo->siguiente = nuevo;          //el ultimo nodo apunta a nuevo
        nuevo->siguiente = NULL;            //el nuevo apunta a NULL porque ahora es el ultimo de la lista
        ultimo = nuevo;                     // el ultimo es ahora el nuevo
    }

    printf("Nodo ingresado.\n\n");

}

void imprimir_lista(){

    Nodo *actual = new Nodo();
    actual = primero;

    if(primero != NULL){
        while(actual != NULL){

            printf("%d ",actual->dato);
            actual = actual->siguiente; 
        }
    }
    else{
        printf("La lista está vacía.\n");
    }
}
