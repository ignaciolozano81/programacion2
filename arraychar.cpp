#include <stdio.h>
#include <conio.h>
#include<stdlib.h>

int main (){
 char palabra [20] {};
 char a = 'a';
 int contador = 0;

 system("cls");

 printf("Ingrese una palabra: ");
 scanf("%s",palabra);
 
 for (int i = 0; i < 20; i ++){
     
    if (palabra[i] == a){
        contador ++;    
    }
 } 

printf("la palabra ingresada contiene %d letras a",contador);
getch();

return 0;
}
