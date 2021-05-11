#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<iostream>
#include<locale.h>
using namespace :: std;


int proximoPar(int numerof); //prototipo de la función

int main(){ // función principal
setlocale(LC_CTYPE,"Spanish");
int numero;

cout<<"Ingrese un número :";
cin>>numero;

cout<<"El próximo par es "<<proximoPar(numero);
return 0;    
}

int proximoPar(int numerof){ //cuerpo de la función

if ((numerof % 2) == 1){
    numerof = numerof + 1;    
}
else{
numerof = numerof + 2;
}
return numerof;
}