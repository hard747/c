 /*1buscar alumno 2modificar nota 3media aritmetica de los notas de los alumnos 4media aritmetica de las notas menores que 5  5mostrar los alumnos con mejor nota   
  6alumnos con peore notas   7 salir*/
#include<iostream>
using namespace std;

int main()
{
	system("color 0A");
	cout<<"introdusca la cantidad de alumnos"<<endl;
	float n;
	cin>>n;
struct alumno
{
	char alumno[50];
	float nota;
}  alumnos[5];
for(int i=0;i<n;i++)
{
	cout<<"introdusca el nombre del alumno "<<i+1<<endl;
	cin>>alumnos[i].alumno;
	cout<<"introdusca la nota del alumno "<<i+1<<endl;
	cin>>alumnos[i].nota;			
}
	int opcion=1;
while(opcion==1 || opcion==2 || opcion==3 || opcion==4 || opcion==5 || opcion==6 && opcion != 7)
{
	cout<<"eliga una opcion: "<<endl<<endl;
	cout<<"1.Buscar alumno(a)."<<endl;
	cout<<"2.Modificar nota."<<endl;
	cout<<"3.Realizar la media de todas las notas."<<endl;
	cout<<"4.Realizar la media de las notas menores de 5."<<endl;
	cout<<"5.Mostrar el alumno que mejor nota ha sacado."<<endl;
	cout<<"6.Mostrar el alumno que peor nota ha sacado."<<endl;
	cout<<"7.salir."<<endl;	
	cin>>opcion;
if(opcion ==1)
	{
		char a[50];
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
		cout<<endl<<"Nota modificada"<<endl<<endl;
		}
		}
	}
else if(opcion == 3)
	{
		float sum=0;	
		for(int i=0;i<n;i++)
		{
			sum=sum+alumnos[i].nota;	
		}
		float r=sum/n;
	cout<<endl<<"La media de  todas las notas es: "<<r<<endl<<endl;	
	}		
else if(opcion == 4)
	{
		float r;bool band=false;
		float m=0;float sum=0;
		for(int i=0;i<n;i++)
		{
			if(alumnos[i].nota<5)
			{
				sum=sum+alumnos[i].nota;
				m++;
				band = true;
				r=sum/m;
			}		
		}
		if(band==true)
		{
		cout<<endl<<"La media de las notas menores que 5 es: "<<r<<endl<<endl;
		}
		if(band==false)
		{
			cout<<"no hay notas menores que 5"<<endl;
		}
	}					
else if(opcion == 5)
	{
	int	min,max=0;	
	for(int i=0;i<n;i++)
	{
		if(alumnos[i].nota>max)
		{
			max=alumnos[i].nota;
		}
	}
	for(int j=0;j<n;j++)
	{
	if(alumnos[j].nota == max)
	{
		min=j;
		cout<<endl<<"El alumno(a) con mayor nota es "<< alumnos[min].alumno <<" y su nota es: "<<max<<endl<<endl;
	}
	}
	}	
else if(opcion == 6)
	{
	int k,min=20;	
	for(int i=0;i<n;i++)
	{
		if(alumnos[i].nota<min)
		{
			min=alumnos[i].nota;
		}
	}
	for(int j=0;j<n;j++)
	{
		if(alumnos[j].nota == min)
		{
		k=j;
		cout<<endl<<"El alumno(a) con menor nota es "<< alumnos[k].alumno <<" y su nota es: "<<min<<endl<<endl;
		}
	}
	}
}
	return 0;
}
