#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	system("color 0A");
	cout<<"introdusca la cantidad de personas"<<endl;
	int n;
	cin>>n;
struct casar
{
	char nombre[50];
	int edad;
	char sexo;
	char aficiones[50];
}  personas[n];
for(int i=0;i<n;i++)
{
	cout<<"introdusca el nombre "<<i+1<<endl;
	gets(personas[i].nombre);
	gets(personas[i].nombre);
	cout<<"introdusca la edad "<<i+1<<endl;
	cin>>personas[i].edad;
	cout<<"introdusca el sexo (M o F): "<<endl;
	cin>>personas[i].sexo;
	int band=0;
	while(band!=1){
	cout<<"introdusca sus aficiones"<<endl;
	cout<<"1.Lectura"<<endl;
	cout<<"2.Viajes "<<endl;
	cout<<"3.Deportes "<<endl;
	cout<<"4.Cine "<<endl;
	cout<<"5.Gastronomia "<<endl;
	cout<<"6.Ordenadores "<<endl;
	cout<<"7.Juegos de rol "<<endl;	
	cout<<"8.Modelismo "<<endl;
	cout<<"9.Perros "<<endl;
	cout<<"10.Presione 0 para terminar "<<endl;	
	cin>>personas[i].aficiones;	
	cin>>band;
	}	
}
//system("cls");
/*
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
}*/
int opcion=1;
while(opcion==1 || opcion==2 || opcion==3 && opcion!=4 )
{
cout<<"eliga una opcion: "<<endl<<endl;
	cout<<"1.Buscar una persona "<<endl;
	cout<<"2.Eliminar a una persona"<<endl;
	cout<<"3.Casar a una persona "<<endl;
	cout<<"4.salir "<<endl;
	cin>>opcion;
if(opcion==1){	
		char a[50];
		cout<<endl<<"introdusca el nombre de la persona"<<endl;
		gets(a);gets(a);
		for(int i=0;i<n;i++)
		{
		if(strcmp(personas[i].nombre,a)==0  )
		{
			cout<<endl<<"nombre: "<<personas[i].nombre <<endl;
			cout<<"edad  : "<<personas[i].edad <<endl;
			cout<<"sexo: "<<personas[i].sexo <<endl;
			cout<<"aficiones : "<<personas[i].aficiones <<endl<<endl;
		}
		
		}
	}
else if(opcion==2){	
		char a[50];
		cout<<endl<<"introdusca el nombre de la persona a eliminar"<<endl;
		gets(a);gets(a);
		for(int i=0;i<n;i++)
		{
		if(strcmp(personas[i].nombre,a)==0  )
		{
			cout<<endl<<"nombre: "<<personas[i].nombre <<endl;
			cout<<"edad  : "<<personas[i].edad <<endl;
			cout<<"sexo: "<<personas[i].sexo <<endl;
			cout<<"aficiones : "<<personas[i].aficiones <<endl<<endl;
		}
		
		}
	}
else if(opcion==3){
	char b[50];
	if(strcmp(personas[i].aficiones,a)==0  ){
		
	}
	
}	
}
/*
{
		cout<<endl<<"introdusca el nombre del alumno(a)"<<endl;
		char b[50];
		cin>>b;
		for(int i=0;i<n;i++)
		{
		if(strcmp(alumnos[i].alumno,b)==0)
		{
		cout<<"introdusca la nueva nota del alumno(a): ";
		cin>>alumnos[i].nota;
		cout<<endl<<"Nota modificada"<<endl<<endl;
		}
		}
	}*/

	return 0;
}
