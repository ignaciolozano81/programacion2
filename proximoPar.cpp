#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<iostream>
#include<locale.h>
using namespace :: std;


int proximoPar(int numerof); //prototipo de la funci�n

int main(){ // funci�n principal
setlocale(LC_CTYPE,"Spanish");
int numero;

cout<<"Ingrese un n�mero :";
cin>>numero;

cout<<"El pr�ximo par es "<<proximoPar(numero);
return 0;    
}

int proximoPar(int numerof){ //cuerpo de la funci�n

if ((numerof % 2) == 1){
    numerof = numerof + 1;    
}
else{
numerof = numerof + 2;
}
return numerof;
}