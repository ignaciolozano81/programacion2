#include <iostream>
#include <stdio.h> 
#include <conio.h>
#include <stdlib.h>

using namespace :: std;

int numarreglo; //*arreglo;

struct Nodo
{
   int dato;
   Nodo *siguiente;
} *primero, *ultimo, *arreglo;

void crear_arreglo();
void mostrar_arreglo();
void insertar_nodo();
void imprimir_lista();

int main(){

crear_arreglo();
mostrar_arreglo();

delete [] arreglo;



return 0;
}

void crear_arreglo(){
    
    printf("Digite el numero de elementos del arreglo: ");
    scanf("%d",&numarreglo);

    arreglo = new Nodo[numarreglo];

    for(int i = 0; i<numarreglo; i++){

        
        
         insertar_nodo();

    }

}

void mostrar_arreglo(){
    system("cls");

    for(int i = 0 ; i<numarreglo; i++){

        printf("Espacio (vertice) - %d: ", arreglo[i]);
        
        imprimir_lista();
    }

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