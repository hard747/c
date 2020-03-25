#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	system("color 0A");
	cout<<"introdusca la cantidad de productos"<<endl;
	int n;
	cin>>n;
struct farmacia
{
	int codigo;
	char nombre[50];
	char descripcion[50];
	char laboratorio[50];
	char proveedor[50];
	float precio;
	string caducidad;
}  producto[n];
for(int i=0;i<n;i++)
{
	cout<<"introdusca el codigo "<<i+1<<endl;
	cin>>producto[i].codigo;
	cout<<"introdusca el nombre "<<i+1<<endl;
	cin>>producto[i].nombre;
	cout<<"introdusca la descripcion: "<<endl;
	gets(producto[i].descripcion);
	gets(producto[i].descripcion);
	cout<<"introdusca el laboratorio "<<i+1<<endl;
	cin>>producto[i].laboratorio;
	cout<<"introdusca el proveedor "<<i+1<<endl;
	cin>>producto[i].proveedor;
	cout<<"introdusca el precio "<<i+1<<endl;
	cin>>producto[i].precio;
	cout<<"introdusca la fecha de caducidad "<<i+1<<endl;
	cin>>producto[i].caducidad;			
}
system("cls");

for(int i=0;i<n;i++)
{
	
	cout<<" "<<producto[i].codigo<<"\t\t\t";
	cout<<producto[i].nombre<<endl<<endl;
	cout<<"Descripcion: \t\t";
	puts(producto[i].descripcion);
	cout<<"laboratorio: \t\t"<<producto[i].laboratorio<<endl;
	cout<<"proveedor: \t\t"<<producto[i].proveedor<<endl;
	cout<<"precio: \t\t"<<producto[i].precio<<endl;
	cout<<"fecha de caducidad: \t"<<producto[i].caducidad<<endl<<endl;			
}

	return 0;
}
