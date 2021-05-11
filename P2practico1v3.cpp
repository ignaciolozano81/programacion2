#include <stdio.h>
#include <conio.h>
#include <stdlib.h> //librería para la función new y delete
#include <iostream>
using namespace std;

void tamtatrix();
void imprimirmatrix(int ** , int);
void cargarmatrix();
bool validararistas(int **);
bool validaradyacentes(int **);
int **punteromartix, tam=0;

int main(){

char opc;

do {
system("cls");
printf("Que desea hacer?\n\n");

printf("a. Crear la matriz cuadrada\n");
printf("b. Cargar la matriz con los valores del ejercicio\n");
printf("c. Validar aristas\n");
printf("d. Validar nodos adyacentes\n");
printf("e. Salir\n");

scanf("%c",&opc);

switch (opc)
{
case 'a':
case 'A':
    tamtatrix();
    imprimirmatrix(punteromartix,tam);
    getch();
    break;

case 'b':
case 'B':
    cargarmatrix();
    imprimirmatrix(punteromartix,tam);
    getch();
    break;

case 'c':
case 'C':
    validararistas(punteromartix);
    getch();
    break;

case 'd':
case 'D':
    validaradyacentes(punteromartix);
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


for(int i = 0; i<tam;i++){
    delete [] punteromartix [i];
}
delete [] punteromartix;

getch();
return 0;    
}

void tamtatrix(){

    printf("Digite el tamano de la matriz cuadrada: ");
    scanf("%d",&tam);
    //reserva de memoria
    punteromartix = new int *[tam]; //reserva de memoria para las filas 
        for(int i = 0 ; i < tam ; i++){

            punteromartix[i] = new int[tam]; //reserva de memoria para las columnas
        }

        for(int i = 0; i<tam; i++){
            for(int j = 0; j < tam ; j ++){
                *(*(punteromartix+i)+j) = 0;  //ver
            } 

        }
        //*(*(punteromartix)) = {}; ver si funciona

}

void imprimirmatrix(int **punteromartix , int tam){
    
    system("cls");

    for(int i = 0; i<tam;i++){
        for(int j = 0; j<tam;j++){

            printf("%d ",*(*(punteromartix+i)+j));

        }
        printf("\n");
    }


}

void cargarmatrix(){
    if (tam < 6){
     printf("nodos fuera del rango\n");
     getch();
    }
    else{
    *(*(punteromartix+0)+1) = 1;
    *(*(punteromartix+1)+0) = 1;
    *(*(punteromartix+1)+2) = 1;
    *(*(punteromartix+2)+1) = 1;
    *(*(punteromartix+1)+3) = 1;
    *(*(punteromartix+3)+1) = 1;
    *(*(punteromartix+3)+4) = 1;
    *(*(punteromartix+4)+3) = 1;
    *(*(punteromartix+4)+5) = 1;
    *(*(punteromartix+5)+4) = 1;
    *(*(punteromartix+5)+6) = 1;
    *(*(punteromartix+6)+5) = 1;
    *(*(punteromartix+5)+2) = 1;
    *(*(punteromartix+2)+5) = 1;
    }
}

bool validararistas(int **punteromartix){
int vf , vc;
 printf("Ingrese el valor del primer vertice: ");
 scanf("%d",&vf);
 printf("\n");
 printf("Ingrese el valor del segundo vertice: ");
 scanf("%d",&vc);

  if (vf > tam || vc > tam){
       
       printf("Vertices fuera de rango\n\n"); 
    }
    else{
    if (*(*(punteromartix+vf)+vc) == 1){
        printf("SI se encuentra la arista {%d %d} Valor booleano: %d\n\n",vf,vc,true);
        
        return true;

    }
    else{

        printf("NO se encuentra la arista {%d %d} Valor booleano: %d\n\n",vf,vc,false);
        return false;
    }
    }

getch();

}

bool validaradyacentes(int **punteromartix){

int vf , vc;
 printf("Ingrese el valor del primer vertice: ");
 scanf("%d",&vf);
 printf("\n");
 printf("Ingrese el valor del segundo vertice: ");
 scanf("%d",&vc);

  if (vf > tam || vc > tam){
       
       printf("Vertices fuera de rango\n\n"); 
    }
    else{
    if (*(*(punteromartix+vf)+vc) == 1){
        printf("Los vertices %d y %d son adyacentes. Valor booleano: %d\n\n",vf,vc,true);
        
        return true;

    }
    else{

        printf("Los vertices %d y %d no son adyacentes. Valor booleano: %d\n\n",vf,vc,false);
        return false;
    }
    }

getch();

}

