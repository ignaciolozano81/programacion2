#include <iostream>
#include <cstdlib>
using namespace std;

struct nodo
{
 int nro;
 struct nodo *sgte;
};

typedef struct nodo *List;
void leer(List lista[],int n);
void impListas(List lista[],int n);

int main()
{
 List lista[50] = {NULL};
 int n;
 cin>>n;
 leer(lista,n);
 system("pause");
 impListas(lista,n);
 return 0;
}

void leer(List lista[],int n)
{
 List p;
 for(int i=0;i<n;i++)
 {
  cout<<"=== Lista #"<<i+1<<" ==="<<endl;
  int k=0;
  while(1)
  {
   p = new(struct nodo);
   cout<<"Elemento "<<k<<": ";cin>>p->nro;
   if(p->nro == -1){break;}
   p->sgte = lista[i];
   lista[i] = p;
   k++;
  }
 }
}

void impListas(List lista[],int n)
{
 List p;
 for(int i=0;i<n;i++)
 {
  cout<<"--- [Lista #"<<i+1<<"] --- "<<endl;
  int k=0;
  p = lista[i];
  while(p)
  {
   cout<<p->nro<<endl;
   p = p->sgte;
   k++;
  }
  cout<<"Total elementos: "<<k<<endl;
 }
}