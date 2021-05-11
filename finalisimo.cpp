#include <iostream>
#include <stdio.h> 
#include <conio.h>
#include <stdlib.h>

using namespace :: std;

struct Nodo
{
   int dato;
   Nodo *siguiente;   
}*primero, *ultimo; 

int main(){

struct Nodo Grafo[7]; // creo el arreglo de 7 
Nodo *nuevo; //se crea un nodo nuevo

nuevo->siguiente = NULL; //el Nuevo lo apunto a NULL

for(int i = 0; i<7;i++){                                  //inicializo todo los primeros elementos a NULL

Grafo[i].dato = i;
Grafo[i].siguiente = nuevo->siguiente; //puede ser &nuevo
}

nuevo->dato = 1;

ultimo = nuevo; 

ultimo->siguiente = nuevo;

nuevo->siguiente = NULL; 

ultimo = nuevo;  

Grafo[0].siguiente = ultimo->siguiente;


for(int i = 0; i<7;i++){

    printf("vertice %d \n",i);
    //printf("%d \n",Grafo[i].dato);

    Nodo *aux = new Nodo();
    aux = &Grafo[i];
    while(aux->siguiente != NULL){

        printf("%d\n",aux->siguiente->dato);
        aux = aux->siguiente;   
   }


}

return 0;    
}