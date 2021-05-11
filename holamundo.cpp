#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

//prototipo de la función
int max(int x , int y);

int main (){

int n1,n2;
int mayor;
cout << "Digite dos números:    ";
cin >> n1 >> n2;

mayor = max(n1,n2);

cout <<"El mayor de los dos números es:" << mayor <<endl;

getch();

//cout << "Hola mundo" << endl;
//system ("PAUSE");  
//printf("hola mundo\n");
return 0;

}

int max(int x , int y){

int nummax;

if (x>y){
nummax = x;
}
else{
nummax = y;
}

return nummax;

}