#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	float x[3],y[3],z[3],P;system("color 0B");
	for(int i=0;i<3;i++)
	{
		cout<<endl<<" introducir la coordenada "<<i+1<<" del punto A:"<<endl<<endl<<"  ";
		cin>>x[i];
		system("cls");
	}system("color 0C");
	for(int i=0;i<3;i++)
	{
		cout<<endl<<" introducir la coordenada "<<i+1<<" del punto B:"<<endl<<endl<<"  ";
		cin>>y[i];
		system("cls");
	}system("color 0D");
	for(int i=0;i<3;i++)
	{
		cout<<endl<<" introducir la coordenada "<<i+1<<" del punto C:"<<endl<<endl<<"  ";
		cin>>z[i];
		system("cls");
	}
	system("cls");system("color 0A");
	float a=0,b=0,c=0;cout<<endl<<endl;
	cout<<"Los puntos del triangulo son: "<<endl<<endl;
	cout<<"     A=("<<x[0]<<","<<x[1]<<","<<x[2]<<")"<<endl<<endl;
	cout<<"     B=("<<y[0]<<","<<y[1]<<","<<y[2]<<")"<<endl<<endl;
	cout<<"     C=("<<z[0]<<","<<z[1]<<","<<z[2]<<")"<<endl<<endl;
	for(int i=0;i<3;i++)
	{
			a=a+pow(y[i]-x[i],2);
	}
	for(int i=0;i<3;i++)
	{
			b=b+pow(y[i]-z[i],2);
	}
	for(int i=0;i<3;i++)
	{
			c=c+pow(z[i]-x[i],2);
	}
	float dAB = sqrt(a);float dBC = sqrt(b);float dAC = sqrt(c);
	P=dAB+dBC+dAC;
	cout<<"El perimetro del triangulo ABC es: "<<P<<endl;
	return 0;
}
