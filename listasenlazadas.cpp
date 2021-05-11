


#include <stdio.h> 
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Nodo
{
   int dato;
   Nodo *siguiente;
}; 

int main(){
    
    Nodo *lista = NULL;  //puntero a null para inicializar la lista

    Nodo *nodo2 = new Nodo();
    nodo2->dato=17;
    nodo2->siguiente=NULL;
    Nodo *nuevo_nodo = new Nodo(); //creo el nodo
    nuevo_nodo->siguiente = nodo2;

    nuevo_nodo->dato = 15;
    
    lista = nuevo_nodo;
     
    printf("Hola\n");
    while(lista != NULL){
        printf("hola2\n");

        printf("%d\n",lista->dato);

        lista = lista->siguiente;
    }

getch ();
return 0;    
}








