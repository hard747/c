#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

using namespace std;
int suma (int x)
{
	int suma =0;
	while(x>0)
	{
		suma=suma+(x%10);
		x=x/10;		
	}
	return (suma);
}


int main()
{
	system("mode con cols=170");
	system("mode con lines=60");
	system("color 0A");
	system("title habla barrio");
	cout<< "hola mundo" <<endl;
	int i=1;
	int n,k;
	cout<<"ingrese el numero"<<": ";
	cin>>n;

	while(i<=n)
	{
		cout<<i<<" ";
		i++;
	}
	cout<<"\n\ningrese la edad"<<endl;
	cin>> k;
	if(k<=18)
	{
		cout<<"es menor de edad"<<endl;
	}
	else if(k<=40)
	{
		cout<<"es adulto"<<endl;
	}
	else if(k<=60)
	{
		cout<<"es un gran adulto"<<endl;
	}
	else
	{
		cout<<"es adulto mayor"<<endl;
	}
	cout<<suma(k)<<endl;
	int m,p,x,y;
	system("pause");
	cout<<"Elige una opcion: \n1. circulo\n2. rectangulo\n3. triangulo"<<endl;
	cin>> m;
	switch(m)
	{
		case 1:
			cout<<"introdusca el lado"<<endl;
			cin>>p;
			cout<<"el area del cuadrado es: "<<(3.1416)*(p*p)<<endl;
			break;
		case 2:
			cout<<"introdusca el ancho"<<endl;
			cin>>x;
			cout<<"introdusca el largo"<<endl;
			cin>>y;
			cout<<"el area del rectangulo es: "<<(x*y)<<endl;			
			break;
		case 3:
			cout<<"introdusca la base"<<endl;
			cin>>x;
			cout<<"introdusca la altura"<<endl;
			cin>>y;
			cout<<"el area del triangulo es: "<< (x*y)/2<<endl;
			break;
		default:
			cout<<"entrada no valida"<<endl;
			
	}
	double r=12387%10;
	cout<<r<<endl;
	int l;
	cout<<"introdusca el numero"<<endl;
	cin>> l;
	int factorial=1;
	for(int i=l;i>0;i--)
	{
		factorial=factorial*i;
	}
	cout<<factorial<<endl;
	system("pause");
	return 0;
}
