#include <iostream>
#include <conio.h>

using namespace std;

struct Nodo{
	int Val;
	struct Nodo *ptr;
};

int main()
{
	struct Nodo *inicio;
	struct Nodo *Nodo;
	Nodo=new struct Nodo;//crea una estructura
	inicio = Nodo;//puntero apuntando a puntero
	inicio->ptr=NULL;
	inicio->Val=10;
	
	Nodo=new struct Nodo;//crea otra estructura
	inicio->ptr=Nodo;
	inicio->ptr->ptr=NULL;
	inicio->ptr->Val=20;
	
	Nodo=new struct Nodo;//crea otra estructura
	inicio->ptr=Nodo;
	inicio->ptr->ptr->ptr=NULL;
	inicio->ptr->ptr->Val=30;
	
	Nodo=new struct Nodo;//crea otra estructura
	inicio->ptr=Nodo;
	inicio->ptr->ptr->ptr->ptr=NULL;
	inicio->ptr->ptr->ptr->Val=40;
	
	//imprimir los valores
	cout<<inicio->Val<<endl<<endl;
	cout<<inicio->ptr->Val<<endl;
	cout<<inicio->ptr->ptr->Val<<endl;
	cout<<inicio->ptr->ptr->ptr->Val<<endl;
	
	return 0;
}
