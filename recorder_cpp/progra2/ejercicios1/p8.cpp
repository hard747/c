#include<iostream>
using namespace std;
void ceros(int n)
{
	for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{	
	if(j%n==0)
	{
	cout<<endl<<"     ";
	}
		cout<<0<<" ";
	}
}
cout<<endl<<endl;
}
void unos(int n)
{
	for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{	
	if(j%n==0)
	{
	cout<<endl<<"     ";
	}
		cout<<1<<" ";
	}
}
cout<<endl<<endl;
}
void diagonal(int n)
{
	for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{	
	if(j%n==0)
	{
	cout<<endl<<"     ";
	}
	if(i==j)
	{
		cout<<1<<" ";
	}
	else
	{
		cout<<0<<" ";
	}
	}
}
cout<<endl<<endl;
}

int main()
{
	system("color 1E");
	cout<<"introduzca la dimension de la matriz cuadrada"<<endl;int n;
cin>>n;
int opcion=1;
	while((opcion==1 || opcion==2 || opcion==3 || opcion==4) && (opcion!=5))
	{
		cout<<"     Eliga una opcion:"<<endl<<endl;
		cout<<"     1.Matriz de ceros."<<endl;
		cout<<"     2.Matriz de unos."<<endl;
		cout<<"     3.Matriz diagonal de unos."<<endl;
		cout<<"     4.introducir nueva dimension de la matriz cuadrada."<<endl;
		cout<<"     5.Salir."<<endl;
		cin>>opcion;system("cls");
		if(opcion==1)
			{
			ceros(n);
			}
		else if(opcion==2)
			{
				unos(n);
			}
		else if(opcion==3)
			{
				diagonal(n);
			}
		else if(opcion==4)
		{
			cout<<"introduzca la dimension de la matriz cuadrada"<<endl;int n;
			cin>>n;	
		}
	}
			return 0;	
}
