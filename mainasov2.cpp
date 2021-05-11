/*PROGRAMADO POR CARLOS IGNACIO LOZANO
2°B - PROGRAMACION 2 INET 2021*/

/*si se carga 2 o mas veces la lista de adyacencia vuelve a cargar todo el 
grafo en el último espacio del array es un error que aún no pude arreglar
agradezco sugerencia*/



#include <iostream>
#include <stdio.h> 
#include <conio.h>
#include <stdlib.h>

using namespace :: std;

 struct Nodo{ 
    int dato;
    Nodo *siguiente;
} *primero , *ultimo;


int const N = 7; ///cambiando esta constante definimos el numero de vértices del Grafo
    
Nodo *Grafo [N];


void insertar_nodo(int vertice, int nodo);

void imprimir_lista();

void imprimir_vertice(int);

void creagrafo();

bool valida_arista();

bool adyacente();


int main (){
for(int i = 0 ; i <N ; i++){    //inicializamos el Grafo a NULL
Grafo[i] = NULL;
}
char opc;

do {
system("cls");
printf("Que desea hacer?\n\n");

printf("a. Cargar Lista con los valores del ejercicio\n");
printf("b. Imprimir Lista de adyacencia\n");
printf("c. Validar aristas\n");
printf("d. Validar nodos adyacentes\n");
printf("e. Salir\n");

scanf("%c",&opc);

switch (opc)
{
case 'a':
case 'A':
    creagrafo();
    
    getch();
    break;

case 'b':
case 'B':
    imprimir_lista();
    getch();
    break;

case 'c':
case 'C':
    valida_arista();
    getch();
    break;

case 'd':
case 'D':
    adyacente();
    getch();
    break;

case 'e':
case 'E':
    return 0;
    break;

default:
    printf("Ingrese una opcion valida\n");
    
    break;
}
} while((opc != 'e') || (opc != 'E'));
   
return 0;    
}

void insertar_nodo(int vertice , int nodo){

    Nodo *nuevo = new Nodo();               
   
    nuevo->dato=nodo;
    if(Grafo[vertice] == NULL){                   
        Grafo[vertice] = nuevo;                   
        Grafo[vertice]->siguiente = NULL;          
        ultimo = nuevo;                     
    }
    else{                                  
        ultimo->siguiente = nuevo;          
        nuevo->siguiente = NULL;            
        ultimo = nuevo;                    
    }

    

}

void creagrafo(){

insertar_nodo(0 ,0);
insertar_nodo(0 ,1);

insertar_nodo(1 ,1);
insertar_nodo(1 ,0);
insertar_nodo(1 ,2);
insertar_nodo(1 ,3);

insertar_nodo(2 ,2);
insertar_nodo(2 ,1);

insertar_nodo(3 ,3);
insertar_nodo(3 ,1);
insertar_nodo(3 ,4);

insertar_nodo(4 ,4);
insertar_nodo(4 ,3);
insertar_nodo(4 ,5);

insertar_nodo(5 ,5);
insertar_nodo(5 ,6);

insertar_nodo(6 ,6);
insertar_nodo(6 ,5);

printf("GRAFO CARGADO\n");

}

void imprimir_lista(){
system("cls");
for (int i = 0 ; i < N ; i ++){
    Nodo *actual = new Nodo();
    actual = Grafo[i];

    if(Grafo[i]!= NULL){
        
        while(actual != NULL){

            printf("%d ",actual->dato);
            actual = actual->siguiente; 
        }
    }
    else{
        printf("La lista esta vacia.\n");
    }
    
    printf("\n\n");
}
}

void imprimir_vertice(int v1){
system("cls");

    Nodo *actual = new Nodo();
    actual = Grafo[v1];

    if(Grafo[v1]!= NULL){
        
        while(actual != NULL){

            printf("%d ",actual->dato);
            actual = actual->siguiente; 
        }
    }
    else{
        printf("La lista esta vacia.\n");
    }
    
    printf("\n\n");

}

bool valida_arista(){
system("cls");

int v1;
int v2;
int ok = 0;


printf("VALIDAR ARISTA\n");
printf("Ingrese el primer vertice: ");
scanf("%d",&v1);
printf("\n");
printf("Ingrese el segundo vertice: ");
scanf("%d",&v2);
printf("\n");

Nodo *actual = new Nodo();
actual = Grafo[v1];



if ((v1 > N) || (v2 > N)){

printf("VERTICES FUERA DE RANGO");
getch();

}
else {
while(actual != NULL && !ok)
{
    if (actual->dato == v2) {
        ok = 1;
    } else {
        actual=actual->siguiente;
    }
}
if(ok)
{   imprimir_vertice(v1);
    printf("EXISTE LA ARISTA %d --- %d\n",v1, v2);
    printf("valor booleano %d",true);
    return true;
}
else
{   imprimir_vertice(v1);
    printf("NO EXISTE LA ARISTA %d --- %d\n",v1, v2);
    printf("valor booleano %d",false);
    return false;
}
}
}

bool adyacente(){
system("cls");

int v1;
int v2;
int ok = 0;


printf("VERTICES ADYACENTES\n");
printf("Ingrese el primer vertice: ");
scanf("%d",&v1);
printf("\n");
printf("Ingrese el segundo vertice: ");
scanf("%d",&v2);
printf("\n");

Nodo *actual = new Nodo();
actual = Grafo[v1];

if ((v1 > N) || (v2 > N)){

printf("VERTICES FUERA DE RANGO");
getch();

}
else {
while(actual != NULL && !ok)
{
    if (actual->dato == v2) {
        ok = 1;
    } else {
        actual=actual->siguiente;
    }
}
if(ok)
{   imprimir_vertice(v1);
    printf("LOS VERTICES %d %d son adyacentes",v1, v2);
    printf("valor booleano %d",true);
    return true;
}
else
{   imprimir_vertice(v1);
     printf("LOS VERTICES %d %d NO son adyacentes",v1, v2);
    printf("valor booleano %d",false);
    return false;
}
}



}





 
 









