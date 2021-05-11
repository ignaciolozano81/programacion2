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
   
};



int main () {

struct Trabajador *fijo[3];
Trabajador *nuevo = new Trabajador();

nuevo->dato = 99;

nuevo->letra= 'A';

nuevo->siguiente = NULL;



fijo[0]->dato=0;
fijo[0]->letra = 'a';
fijo[0]->siguiente = nuevo;

fijo[1]->dato=2;
fijo[1]->letra = 'b';

fijo[2]->dato=4;
fijo[2]->letra = 'c';
printf("hola");


/*for(int i = 0; i<3;i++){

    printf("elemento %d\n",i);
    printf("%d  ",fijo[i]->dato);
    printf("%c\n\n",fijo[i]->letra);

   Trabajador *aux = new Trabajador();
   aux = fijo[i];
   while(aux->siguiente != NULL){

     printf("%d",aux->siguiente->dato);
     aux = aux->siguiente;   


   }

}*/

  

return 0;

}
