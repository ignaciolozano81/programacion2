#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


void menu();
void imprimirmatriz(int matrixl [][7],int,int);
bool validararistas(int matrixl2 [][7],int,int);


int main(){
    int tam = 0;
    int opc = 0;
    int vertice1, vertice2;

    const int NFILAS = 7;
    const int NCOLUMNAS = 7;
    
    printf("Ingrese el tamano de la matriz: ");
    scanf("%d",&tam);
    int matrix [tam][tam] = {};
    int matrix2 [NFILAS][NCOLUMNAS] = {};
    for (int f = 0; f<tam; f++){
        for(int c = 0 ; c < tam;c++){
        printf("%d ",matrix[f][c]);
        }
    printf("\n");
}

    do{
    menu();
    scanf("%d",&opc);
    switch (opc)
    {
   
    case 1:
        return main();
    case 2:
        matrix2 [0][1] = 1;
        matrix2 [1][0] = 1;
        matrix2 [1][2] = 1;
        matrix2 [2][1] = 1;
        matrix2 [1][3] = 1;
        matrix2 [3][1] = 1;
        matrix2 [3][4] = 1;
        matrix2 [4][3] = 1;
        matrix2 [4][5] = 1;
        matrix2 [5][4] = 1;
        matrix2 [5][6] = 1;
        matrix2 [6][5] = 1;
        matrix2 [5][2] = 1;
        matrix2 [2][5] = 1;
        imprimirmatriz(matrix2,NFILAS,NCOLUMNAS);

        break;
    case 3:
        validararistas(matrix2,vertice1,vertice2);
        break;
    case 4:
      return 0;
    default:
        printf("Ingrese una opcion valida\n\n");
    }
  
}while (opc !=4);
system("pause");
return main();
}

void menu(){
    printf ("Que desea hacer?\n\n");
    printf ("1. Volver.\n");
    printf ("2. Crea la matriz y el grafo del ejercicio.\n");
    printf ("3. Validar aristas del grafo.\n");
    printf ("4. Salir\n");    
}
 
void imprimirmatriz(int matrixl [][7], int nfilas , int ncolumnas){
 for (int f = 0; f<nfilas; f++){
            for(int c = 0 ; c < ncolumnas;c++){
                printf("%d ",matrixl[f][c]);
            }
            printf("\n");
        } 


} 

bool validararistas(int matrixl2 [][7],int vertice1,int vertice2){

    printf("Ingrese el valor del primer vertice: ");
    scanf("%d",&vertice1);
    printf("\n");
    printf("Ingrese el valor del segundo vertice: ");
    scanf("%d",&vertice2);

    if (vertice1 > 6 || vertice2 > 6){
       
       printf("Aristas fuera de rango\n\n"); 
    }
    else{
    if (matrixl2[vertice1][vertice2] == 1){
        printf("SI se encuentra la arista {%d %d} Valor booleano: %d\n\n",vertice1,vertice2,true);
        
        return true;

    }
    else{

        printf("NO se encuentra la arista {%d %d} Valor booleano: %d\n\n",vertice1,vertice2,false);
        return false;
    }
    }



}



    




