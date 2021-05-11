#include <iostream>
#include <stdio.h> 
#include <conio.h>
#include <stdlib.h>

using namespace :: std;

 struct Nodo{ 
    int dato;
    Nodo *siguiente;
} *primero , *ultimo;

const int N = 7;
    
Nodo *Grafo [N];


void insertar_nodo();
void insertar_nodo1();
void imprimir_lista();
void imprimir_lista1();


int main (){

const int N = 7;
    
Nodo *Grafo [N];

for(int i = 0 ; i <7 ; i++){
Grafo[i] = NULL;
}

//Grafo[0] = (Nodo*)malloc(sizeof(Nodo));

insertar_nodo();
insertar_nodo();

insertar_nodo1();
insertar_nodo1();
insertar_nodo1();

imprimir_lista();
imprimir_lista1();


    
return 0;    
}

void insertar_nodo(){

    Nodo *nuevo = new Nodo();               //creamos el nuevo nodo
    printf("Ingrese el valor del nodo: ");  //pedimos que ingrese el valor del nodo
    scanf("%d",&nuevo->dato);                // se guarda en el nuevo nodo

    if(Grafo[0] == NULL){                    //si el primer nodo es diferente a NULL
        Grafo[0] = nuevo;                   //el nuevo pasa a ser el primero
        Grafo[0]->siguiente = NULL;          // por lo tanto el primero ahora apunta a NULL
        ultimo = nuevo;                     //el ultimo también es igual a nuevo
    }
    else{                                   // sino (primero es distino a NULL o sea que ya tiene datos)
        ultimo->siguiente = nuevo;          //el ultimo nodo apunta a nuevo
        nuevo->siguiente = NULL;            //el nuevo apunta a NULL porque ahora es el ultimo de la lista
        ultimo = nuevo;                     // el ultimo es ahora el nuevo
    }

    printf("Nodo ingresado.\n\n");

}

void insertar_nodo1(){

    Nodo *nuevo = new Nodo();               //creamos el nuevo nodo
    printf("Ingrese el valor del nodo: ");  //pedimos que ingrese el valor del nodo
    scanf("%d",&nuevo->dato);                // se guarda en el nuevo nodo

    if(Grafo[1] == NULL){                    //si el primer nodo es diferente a NULL
        Grafo[1] = nuevo;                   //el nuevo pasa a ser el primero
        Grafo[1]->siguiente = NULL;          // por lo tanto el primero ahora apunta a NULL
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
    actual = Grafo[0];

    if(Grafo[0]!= NULL){
        while(actual != NULL){

            printf("%d ",actual->dato);
            actual = actual->siguiente; 
        }
    }
    else{
        printf("La lista está vacía.\n");
    }
    printf("\n\n");
}

void imprimir_lista1(){

    Nodo *actual = new Nodo();
    actual = Grafo[1];

    if(Grafo[1]!= NULL){
        while(actual != NULL){

            printf("%d ",actual->dato);
            actual = actual->siguiente; 
        }
    }
    else{
        printf("La lista está vacía.\n");
    }
    printf("\n\n");
}
