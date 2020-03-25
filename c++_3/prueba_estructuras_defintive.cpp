/*gestione las notas de una clase de 20 alumnos de los cuales sabemos nombre y nota  el prograna debe hacer: strcmp  strcpy
 1buscar alumno 2modificar nota 3media aritmetica de los notas de los alumnos 4media aritmetica de las notas menores que 5  5mostrar los alumnos con mejor nota   
  6alumnos con peore notas   7 salir*/
#include<iostream>
using namespace std;

int main()
{
	system("color 0A");
struct alumno
{
	char alumno[50];
	float nota;
}  alumnos[5],nombre[5];
//cont struct alumno *ptr;
//ptr->nota;
for(int i=0;i<5;i++)
{
	cout<<"introdusca el nombre del alumno"<<i+1<<endl;
	cin>>alumnos[i].alumno;
	strcpy(nombre[i].alumno,alumnos[i].alumno);
	cout<<"introdusca la nota del alumno"<<i+1<<endl;
	cin>>alumnos[i].nota;	
	nombre[i].nota=alumnos[i].nota;		
}
	int opcion=1;
while(opcion==1 || opcion==2 || opcion==3 || opcion==4 || opcion==5 || opcion==6 && opcion != 7)
{
	cout<<"eliga una opcion: "<<endl;
	cout<<"1.Buscar alumno."<<endl;
	cout<<"2.Modificar su nota."<<endl;
	cout<<"3.Realizar la media de todas las notas."<<endl;
	cout<<"4.Realizar la media de las notas menores de 5."<<endl;
	cout<<"5.Mostrar el alumno que mejore nota ha sacado."<<endl;
	cout<<"6.Mostrar el alumno que peor nota ha sacado."<<endl;
	cout<<"7.salir."<<endl;	
	cin>>opcion;
if(opcion ==1)
	{
		cout<<"introdusca el nombre del alumno"<<endl;
		char a[50];
		cin>>a;
		for(int i=0;i<5;i++)
		{
		if(strcmp(alumnos[i].alumno,a)==0  )
		{
			cout<<"alumno: "<<alumnos[i].alumno <<endl;
			cout<<"nota  : "<<alumnos[i].nota <<endl;
		}
		}
	}
else if(opcion == 2)
	{
		cout<<"introdusca el nombre del alumno"<<endl;
		char b[50];
		cin>>b;
		for(int i=0;i<5;i++)
		{
		if(strcmp(alumnos[i].alumno,b)==0)
		{
		cout<<"introdusca la nueva nota del alumno: ";
		cin>>alumnos[i].nota;
		cout<<"\n nota modificada"<<endl;
		}
		}
	}
else if(opcion == 3)
	{
		int sum=0;	
		for(int i=0;i<5;i++)
		{
			sum=sum+alumnos[i].nota;	
		}
	cout<<"La media de  todas las notas es: "<<sum/5<<endl;	
	}		
if(opcion == 4)
	{
		float n=0;
		int sum=0;
		for(int i=0;i<5;i++)
		{
			if(alumnos[i].nota<5)
			{
				sum=sum+alumnos[i].nota;
				n++;
			}		
		}
	cout<<"el promedio de las notas menores que 5 es: "<<sum/n<<endl;	
	}
		
		int t,min;					
if(opcion == 5)
	{
	for(int i=0;i<5;i++)
	{
	for(int j=0;j<5-i-1;j++)
	{
		if(alumnos[j].nota>alumnos[j+1].nota)
		{
			t=alumnos[j].nota;
			alumnos[j].nota=alumnos[j+1].nota;
			alumnos[j+1].nota=t;
		}
	}
	}
	for(int j=0;j<5;j++)
	{
	if(nombre[j].nota == alumnos[4].nota)
	{
		min=j;
	}
	}
	cout<<"El alumno con mayor nota es: "<< nombre[min].alumno <<"  su nota es: "<<alumnos[4].nota<<endl;
	}	
else if(opcion == 6)
	{
			for(int i=0;i<5;i++)
	{
	for(int j=0;j<5-i-1;j++)
	{
		if(alumnos[j].nota>alumnos[j+1].nota)
		{
			t=alumnos[j].nota;
			alumnos[j].nota=alumnos[j+1].nota;
			alumnos[j+1].nota=t;
		}
	}
		}	
		cout<<"la mayor nota es: "<<alumnos[0].nota<<endl;	
		}
}
		system("pause");				
	return 0;
}
