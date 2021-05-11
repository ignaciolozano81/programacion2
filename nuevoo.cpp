#include <iostream>
#include <stdio.h> 
#include <conio.h>
#include <stdlib.h>

using namespace :: std;

struct Trabajador
{
   int dato;
   char letra;
   Trabajador *siguiente;
   
} ;

int main (){

printf("holaaa\n");

struct Trabajador fijo[7];
Trabajador nuevo;
nuevo.dato = 99;

nuevo.letra= 'A';

nuevo.siguiente = NULL;



fijo[0].dato=0;
fijo[0].letra = 'a';
fijo[0].siguiente = &nuevo;

fijo[1].dato=2;
fijo[1].letra = 'b';

fijo[2].dato=4;
fijo[2].letra = 'c';

for(int i = 0; i<7;i++){

    printf("elemento %d\n",i);
    printf("%d  \n",fijo[i].dato);
    printf("%c\n\n",fijo[i].dato);

   Trabajador *aux = new Trabajador();
   aux = &fijo[i];
   while(aux->siguiente != NULL){

     printf("%d\n",aux->siguiente->dato);
     aux = aux->siguiente;   


   }

}



printf("hola\n");
    return 0;
}