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
Nodo *primero = new Nodo();
//aux2 = (Nodo*)malloc(sizeof(Nodo));
Nodo *ultimo = new Nodo();

for(int i = 0 ; i <7 ; i++){
Grafo[i] = NULL;
}

    Nodo *nuevo = new Nodo();               //creamos el nuevo nodo
    for(int i = 0; i<4;i++){
    printf("Ingrese el valor del nodo: ");  //pedimos que ingrese el valor del nodo
    scanf("%d",&nuevo->dato);                // se guarda en el nuevo nodo

    if(primero == NULL){                    //si el primer nodo es diferente a NULL
        primero = nuevo;                   //el nuevo pasa a ser el primero
        primero->siguiente = NULL;          // por lo tanto el primero ahora apunta a NULL
        ultimo = nuevo;                     //el ultimo también es igual a nuevo
        Grafo[0]=ultimo;
    }
    else{                                   // sino (primero es distino a NULL o sea que ya tiene datos)
        ultimo->siguiente = nuevo;          //el ultimo nodo apunta a nuevo
        nuevo->siguiente = NULL;            //el nuevo apunta a NULL porque ahora es el ultimo de la lista
        ultimo = nuevo;                     // el ultimo es ahora el nuevo
        Grafo[0] = nuevo;
    }

    printf("Nodo ingresado.\n\n");

    }


     Nodo *actual = new Nodo();
     actual = Grafo[0];

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