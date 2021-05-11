#include <iostream>
#include <stdio.h> 
#include <conio.h>
#include <stdlib.h>

using namespace :: std;

int numarreglo; 

struct Nodo
{
   int dato;
   Nodo *siguiente;
} *primero, *ultimo;
typedef  Nodo * lista;

void crear_arreglo();
void imprime_arreglo();
void cargar_arreglo();
void insertar_nodo();
void imprimir_lista();

int main(){



crear_arreglo();
//imprime_arreglo();
//cargar_arreglo();
//imprime_arreglo();



return 0;
}

void crear_arreglo(){

    printf("Ingrese la cantidad de vertices");
    scanf("%d",&numarreglo);
    typedef lista Grafo[numarreglo]; 

    for (int i ; i < numarreglo; i ++){
        printf("%d",[i]);

    }
}

void cargar_arreglo(){

    int canvert;
    int opc;
    for (int i = 0 ; i < numarreglo ; i ++){

        printf("Desea cargar el vertice? %d \n 1= SI 2=NO\n",i);
        scanf("%d",&opc);

        if (opc == 1){
            printf("Inserte la cantidad de vertices de la lista: ");
            scanf("%d",&canvert);
            for (int i = 0; i < canvert; i++){
                insertar_nodo();
            }    
        }  

    }



}  
     
void imprime_arreglo(){

    for(int i = 0 ; i<numarreglo ; i ++){

        printf("Vertice %d: ",i);
        imprimir_lista ();
        printf("\n\n");

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
        printf("La lista esta vacia.\n");
    }
}