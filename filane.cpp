#include <iostream>
#include <stdio.h> 
#include <conio.h>
#include <stdlib.h>

using namespace :: std;

 struct Nodo
{
   int dato;
   Nodo *siguiente;
} ;

int main (){

Nodo *Grafo [7];
//Nodo *aux1;
//Nodo *aux2;
Grafo[0] = (Nodo*)malloc(sizeof(Nodo));
//aux1 = (Nodo*)malloc(sizeof(Nodo));
Nodo *aux1 = new Nodo();
//aux2 = (Nodo*)malloc(sizeof(Nodo));
Nodo *aux2 = new Nodo();


for(int i = 0 ; i <7 ; i++){
Grafo[i] = NULL;
}

//Grafo[0] = (Nodo*)malloc(sizeof(Nodo)); //reserva el espacio de memoria



aux1->dato = 5;
aux1->siguiente = NULL;

if (Grafo[0]==NULL)
{
   Grafo[0]=aux1;
   Grafo[0]->siguiente=NULL;
   aux2=aux1;
}
else{
  aux2 = aux1;
  aux2->siguiente = NULL;
  Grafo[0]=aux2;
}

///

aux1->dato = 7;
aux1->siguiente = NULL;

if (Grafo[0]==NULL)
{
   Grafo[0]=aux1;
   Grafo[0]->siguiente=NULL;
   aux2=aux1;
}
else{
  aux2 = aux1;
  aux2->siguiente = NULL;
  Grafo[0]=aux2;
}


 Nodo *actual = new Nodo();
 actual = aux1;

    if(Grafo[0] != NULL){
        while(actual != NULL){

            printf("%d ",actual->dato);
            actual = actual->siguiente; 
        }
    }
    else{
        printf("La lista está vacía.\n");
    }

return 0;   
}

