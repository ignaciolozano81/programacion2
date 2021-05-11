#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

//prototipo de la función
int suma (int);

int main (){

int numero;
int resultado;
cout <<"Ingrese un número para calcular la suma "<<endl;
cin >> numero;
resultado = suma(numero);

cout <<resultado<< endl;

getch();

return 0;

}

int suma(int num){

if (num == 0){
num = 0;
}
else{
num = num + suma(num-1);

}
return num;

}