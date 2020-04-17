#include<iostream>
#include<conio.h>
#include<windows.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};


void agregarPila(Nodo*&, int);
void quitar_pila(Nodo *&, int&);

int main(){
	Nodo *pila=NULL;
	int datos;
	cout<<"PILA \n----"<<endl<<endl;
	cout<<endl<<&pila<<endl;
	cout<<pila<<endl<<endl;
	
	 cout<<"Digite un numero: ";
	 cin>>datos;
	 agregarPila(pila,datos);
	 cout<<pila<<endl<<endl;
	 
	 cout<<"Digite otro numero: ";
	 cin>>datos;
	 agregarPila(pila,datos);
	 cout<<pila<<endl<<endl;
	 
	 cout<<"Digite otro numero: ";
	 cin>>datos;
	 agregarPila(pila,datos);
	 cout<<pila<<endl<<endl;
	 
	 cout<<endl<<&pila<<endl<<endl;
	 cout<<"Eliminando elementos de la pila: \n\n";
	 while(pila!=NULL){
	 	quitar_pila(pila,datos);
	 	cout<<"se elimino: "<<datos<<endl<<endl;
	 }
	 
	getch();
	return 0;
	
}

void agregarPila(Nodo *&pila, int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo -> dato=n;
	nuevo_nodo -> siguiente = pila;
	pila = nuevo_nodo;
	
	cout<<"Elemento "<<n<<" agregado a Pila "<<endl;
	cout<<"apuntando al anterior elemento de la pila: "<<nuevo_nodo->siguiente<<endl;
}

void quitar_pila(Nodo *& pila,int & n){
	Nodo *aux=pila;
	n=aux->dato;
	pila=aux->siguiente;
	delete aux;
}


