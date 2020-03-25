#include <iostream>
#include <math.h>
using namespace std;
template <class R>
R norma(R x,R y)
{
	R D=pow(x*x + y*y,0.5);
	return D;
}

int main()
{
	int a,b;
	cout<<"Ingrese valores enteros : "<<endl;
	cin>>a;
	cout<<"";
	cin>>b;
	
	
	cout<<"El vector es A = ["<<a<<","<<b<<"]"<<endl;
	cout<<"Cuya norma en R2 es: "<<norma(a,b);
	
	cout<<""<<endl;
	cout<<""<<endl;
	
	
	double x,y;
	cout<<"Ingrese valores double : "<<endl;
	cin>>x;
	cout<<"";
	cin>>y;
	
	
	cout<<"El vector es A = ["<<x<<","<<y<<"]"<<endl;
	cout<<"Cuya norma en R3 es: "<<norma(x,y);
	
	cout<<""<<endl;
	cout<<""<<endl;
	
	float r,s;
	cout<<"Ingrese valores float : "<<endl;
	cin>>r;
	cout<<"";
	cin>>s;

	
	cout<<"El vector es A = ["<<r<<","<<s<<"]"<<endl;
	cout<<"Cuya norma en R3 es: "<<norma(r,s)<<endl;
	
	system("pause");
	return 0;
}



