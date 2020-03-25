/*gestione las notas de una clase de 20 alumnos de los cuales sabemos nombre y nota  el prograna debe hacer: strcmp  strcpy
 1buscar alumno 2modificar nota 3media aritmetica de los notas de los alumnos 4media aritmetica de las notas menores que 5  5mostrar los alumnos con mejor nota   
  6alumnos con peore notas   7 salir*/
#include<iostream>
using namespace std;

int main()
{
	system("color 0A");
	cout<<"introdusca la cantidad de alumnos"<<endl;
	int n;
	cin>>n;
struct alumno
{
	char alumno[50];
	float nota;
}  alumnos[n],nombre[n];
//cont struct alumno *ptr;
//ptr->nota;
for(int i=0;i<n;i++)
{
	cout<<"introdusca el nombre del alumno "<<i+1<<endl;
	cin>>alumnos[i].alumno;
	strcpy(nombre[i].alumno,alumnos[i].alumno);
	cout<<"introdusca la nota del alumno "<<i+1<<endl;
	cin>>alumnos[i].nota;	
	nombre[i].nota=alumnos[i].nota;		
}
	int opcion=1;
while(opcion==1 || opcion==2 || opcion==3 || opcion==4 || opcion==5 || opcion==6 && opcion != 7)
{
	cout<<"eliga una opcion: "<<endl<<endl;
	cout<<"1.Buscar alumno(a)."<<endl;
	cout<<"2.Modificar su nota."<<endl;
	cout<<"3.Realizar la media de todas las notas."<<endl;
	cout<<"4.Realizar la media de las notas menores de 5."<<endl;
	cout<<"5.Mostrar el alumno que mejor nota ha sacado."<<endl;
	cout<<"6.Mostrar el alumno que peor nota ha sacado."<<endl;
	cout<<"7.salir."<<endl;	
	cin>>opcion;
if(opcion ==1)
	{
		//int i;
		char a[50];
		//do{
		cout<<endl<<"introdusca el nombre del alumno(a)"<<endl;
		cin>>a;
		for(int i=0;i<n;i++)
		{
		if(strcmp(alumnos[i].alumno,a)==0  )
		{
			cout<<"alumno(a): "<<alumnos[i].alumno <<endl;
			cout<<"nota  : "<<alumnos[i].nota <<endl<<endl;
		}
		
	}
	//while(strcmp(alumnos[i].alumno,a)!=0);
	}
else if(opcion == 2)
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
		cout<<"\nNota modificada"<<endl<<endl;
		}
		}
	}
else if(opcion == 3)
	{
		int sum=0;	
		for(int i=0;i<n;i++)
		{
			sum=sum+alumnos[i].nota;	
		}
	cout<<endl<<"La media de  todas las notas es: "<<sum/5<<endl<<endl;	
	}		
if(opcion == 4)
	{
		for(int i=0;i<n;i++)
		{
		if(alumnos[i].nota<5)
		{
		float m=0;
		int sum=0;
		for(int i=0;i<5;i++)
		{
			if(alumnos[i].nota<5)
			{
				sum=sum+alumnos[i].nota;
				n++;
			}		
		}
			cout<<endl<<"el promedio de las notas menores que 5 es: "<<sum/m<<endl<<endl;	
		}
		else
		{
			cout<<endl<<"no hay notas menores que 5"<<endl<<endl;
			break;
		}
		}
	
	}
int t,min;					
if(opcion == 5)
	{
	for(int i=0;i<n;i++)
	{
	for(int j=0;j<n-i-1;j++)
	{
		if(alumnos[j].nota>alumnos[j+1].nota)
		{
			t=alumnos[j].nota;
			alumnos[j].nota=alumnos[j+1].nota;
			alumnos[j+1].nota=t;
		}
	}
	}
	for(int j=0;j<n;j++)
	{
	if(nombre[j].nota == alumnos[n].nota)
	{
		min=j;
		cout<<endl<<"El alumno(a) con mayor nota es "<< nombre[min].alumno <<" y su nota es: "<<alumnos[4].nota<<endl<<endl;
	}
	}
	}	
else if(opcion == 6)
	{
			for(int i=0;i<n;i++)
	{
	for(int j=0;j<n-i-1;j++)
	{
		if(alumnos[j].nota>alumnos[j+1].nota)
		{
			t=alumnos[j].nota;
			alumnos[j].nota=alumnos[j+1].nota;
			alumnos[j+1].nota=t;
		}
	}
	}
	for(int j=0;j<n;j++)
	{
		if(nombre[j].nota == alumnos[0].nota)
		{
		min=j;
		cout<<endl<<"El alumno(a) con menor nota es "<< nombre[min].alumno <<" y su nota es: "<<alumnos[0].nota<<endl<<endl;
		}
	}
	}
}
	return 0;
}
