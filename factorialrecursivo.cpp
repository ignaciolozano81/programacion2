#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

//prototipo de la función
int factorial (int);

int main (){

int numero;
int resultado;
cout <<"Ingrese un número para calcular el factorial "<<endl;
cin >> numero;
resultado = factorial(numero);

cout <<resultado<< endl;

getch();

return 0;

}

int factorial(int num){

if (num == 0){
num = 1;
}
else{
num = num * factorial(num-1);

}
return num;

}