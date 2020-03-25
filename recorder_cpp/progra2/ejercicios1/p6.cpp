#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	system("color 0A");
	float a,x,y,z;
	cout<<"introduzca la cantidad:"<<endl;
	cin>>a;
	x=a*1000;
	y=(a*2.54)/1000;
	z=a/1000;
	int opcion=1;
	while((opcion==1 || opcion==2 || opcion==3 || opcion == 4) && (opcion!=5))
	{
		cout<<endl<<"     Eliga las unidades u otra opcion:"<<endl<<endl;
		cout<<"     1.kilometros."<<endl;
		cout<<"     2.pulgadas."<<endl;
		cout<<"     3.centimetros."<<endl;
		cout<<"     4.introducir otra cantidad."<<endl;
		cout<<"     5.salir."<<endl;
		cin>>opcion;system("cls");
	switch(opcion)
	{
		case 1:
			cout<<endl<<endl<<"     "<<a<<" kilometros = "<<x<<" metros."<<endl<<endl;
			break;
		case 2:
			cout<<endl<<endl<<"     "<<a<<" pulgadas = "<<y<<" metros."<<endl<<endl;
			break;
		case 3:	
			cout<<endl<<endl<<"     "<<a<<" centimetros = "<<z<<" metros."<<endl<<endl;
			break;
		case 4:	
			cout<<"introduzca la cantidad:"<<endl;
			cin>>a;
	}
	}
}
