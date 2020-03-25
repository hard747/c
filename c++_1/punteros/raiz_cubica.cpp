#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	cout<<"introdusca el numero: "<<endl;
	double n;
	cin>>n;
	cout<<"introdusca hasta que indice desea calcular la raices: "<<endl;
	double p;
	cin>>p;
	system("color 0A");
	double a=1;
	for(double i=1;i<=p;i++)
	{
		double m=a/i;
		cout<<endl<<"la raiz de indice "<<i<<" es = "<<pow(n,m)<<endl;
	}
	return 0;
}
