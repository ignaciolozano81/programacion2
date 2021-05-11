#include <iostream>
#include <stdio.h> 
#include <conio.h>
#include <stdlib.h>

using namespace :: std;

struct Trabajador
{
   int dato;
   char letra;
   
};

struct Trabajador fijo[3];

int main () {

fijo[0].dato=0;
fijo[0].letra = 'a';
fijo[1].dato=2;
fijo[1].letra = 'b';
fijo[2].dato=4;
fijo[2].letra = 'c';

for(int i = 0; i<3;i++){

    printf("elemento %d\n",i);
    printf("%d  ",fijo[i].dato);
    printf("%c\n\n",fijo[i].letra);

}

    
    return 0;
}