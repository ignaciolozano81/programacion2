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




int main(){
const int N = 2;/* cantidad de vertices */

//Nodo * primero;
//Nodo * ultimo;

typedef Nodo *lista;

lista Arreglo[N];    

Nodo *nuevo = new Nodo(); 


for(int i ; i<N;i++){
Arreglo[i] -> siguiente = NULL;
}

for(int i = 0 ; i <N; i ++){
printf("Ingrese el valor del nodo: ");  
scanf("%d",&nuevo->dato);
 
 if(Arreglo[0]->siguiente == NULL){

     Arreglo[0]->dato = nuevo->dato;
     printf("holas\n");
     getchar();

 }
 else{

      ultimo->siguiente = nuevo;          
      nuevo->siguiente = NULL;            
      Arreglo[0]->dato = nuevo->dato; 
}

}
getchar();
return 0;
}









