#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	float x,y,z;system("color 0A");
	cout<<"Introduzca las longitudes de los lados del triangulo: "<<endl<<" a = ";
	cin>>x;cout<<" b = ";cin>>y;cout<<" c = ";cin>>z;system("cls");
	if(  (abs(z-y)<x&&x<(y+z)) && (abs(z-x)<y&&y<(x+z)) &&  (abs(y-x)<z&&z<(x+y))  )
	{
		if(x!=y && x!=z && y!=z)
		{
			cout<<"El triangulo es escaleno"<<endl;
		}
		else if(x==y &&  y==z)
		{
			cout<<"El triangulo es equilatero"<<endl;
		}
		else
		{
			cout<<"El triangulo es isosceles"<<endl;
		}
	}
	else
	{
		cout<<"No existe el triangulo"<<endl;
	}
	
	return 0;
}
