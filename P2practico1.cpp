#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int matrixsize ();
void imprimematriz0(int);
void menu(int, int); 


int main(){
    system("cls");
    int tam = matrixsize();
    int matrix [tam][tam] = {};
    int opc, opc1, fi, co;
    bool valor = 1; 
    
    
    imprimematriz0(tam);

    printf("\n\n");

    menu(opc, tam);

    /*do{
    printf ("¿Qué desea hacer?\n\n");
    
    printf ("1. Agragar aristas al grafo.\n");
    printf ("2. Validar aristas del grafo.\n");
    printf ("3. Salir\n");    

    scanf("%d",&opc);

    
    switch(opc) {
    case 1:
    
    do{
    printf("Ingrese el primer vertice: ");
    scanf("%d",&fi);
    printf("\n");
    printf("Ingrese el segundo vertice: ");
    scanf("%d",&co);

    matrix [fi][co] = 1;
    matrix [co][fi] = 1;

    for (int f = 0; f<tam; f++){
        for(int c = 0 ; c < tam;c++){
        printf("%d ",matrix[f][c]);
        }
    printf("\n");
    }

    printf("\n\n");
    printf("Para salir digite 1, para continuar cualquier otro número.\n");
    scanf("%d",&opc1);

    } while(opc1 != 1);

    case 2:
    do{
    printf("Ingrese el primer vertice: ");
    scanf("%d",&fi);
    printf("\n");
    printf("Ingrese el segundo vertice: ");
    scanf("%d",&co);

    if (matrix [fi][co] == 1){
        valor = 1;
        printf("Existe la arista, valor del booleano %d\n",valor);

    }
    else{
        valor = 0;
        printf("No existe la arista, valor del booleano %d\n",valor);

    }

   

    printf("\n\n");
    printf("Para salir digite 1, para continuar cualquier otro número.\n");
    scanf("%d",&opc1);

    } while(opc1 != 1);
    
    case 3:
    break;
   
    default:
    printf("Ingrese una opción válida");
    }
    
    } while ( opc != 3 );
*/
    return 0;    
}


int matrixsize (){
    int tam;
    printf("Ingrese el tamaño de la matriz: ");
    scanf("%d",&tam);
    return tam;
}

void imprimematriz0(int tam){ 
int matrixl [tam][tam] = {};  
for (int f = 0; f<tam; f++){
        for(int c = 0 ; c < tam;c++){
        printf("%d ",matrixl[f][c]);
        }
    printf("\n");
}
}

void menu(int opcl ,int tam){
    int  fi, co, opc1; 
    int matrix [tam][tam] = {};
    bool valor;
    
 do{
    printf ("¿Qué desea hacer?\n\n");
    
    printf ("1. Agragar aristas al grafo.\n");
    printf ("2. Validar aristas del grafo.\n");
    printf ("3. Salir\n");    

    scanf("%d",&opcl);

    
    switch(opcl) {
    case 1:
    
    do{
        //nueva función llenado de matriz
    printf("Ingrese el primer vertice: ");
    scanf("%d",&fi);
    printf("\n");
    printf("Ingrese el segundo vertice: ");
    scanf("%d",&co);

    matrix [fi][co] = 1;
    matrix [co][fi] = 1;

    for (int f = 0; f<tam; f++){
        for(int c = 0 ; c < tam;c++){
        printf("%d ",matrix[f][c]);
        }
    printf("\n");
    }

    printf("\n\n");
    printf("Para salir digite 1, para continuar cualquier otro número.\n");
    scanf("%d",&opc1);
    }
    } while(opc1 != 1);
        //terminaría el llenado de la matriz
    case 2:
    /*do{
        //validación del llenado de la matriz
    printf("Ingrese el primer vertice: ");
    scanf("%d",&fi);
    printf("\n");
    printf("Ingrese el segundo vertice: ");
    scanf("%d",&co);

    if (matrix [fi][co] == 1){
        valor = 1;
        printf("Existe la arista, valor del booleano %d\n",valor);

    }
    else{
        valor = 0;
        printf("No existe la arista, valor del booleano %d\n",valor);

    }

   

    printf("\n\n");
    printf("Para salir digite 1, para continuar cualquier otro número.\n");
    scanf("%d",&opc1);

    } while(opc1 != 1);
    // terminaría la función del validado del la matriz
    */
    case 3:
    break;
   
    default:
    printf("Ingrese una opción válida");
    }
    
    } while ( opcl != 3 );


