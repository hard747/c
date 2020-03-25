#include<iostream>
#include<math.h>
#define p 0.0174
using namespace std;

int factorial (int n){
	int z;
	if(n>0){
		z=n*factorial(n-1);
	}
	else{
		z=1;
	}
	return z;
}
int main()
{
	float m,k, a,y=0;
	cout<<"introduzca numero"<<endl;
	cin>>k;
	m=k*p;
	//cout<<"introduzca numero de iteraciones"<<endl;
	//int n;
	//cin>>n;
	//a=factorial(m);
	for(int i=0;i<=15;i++)
	{
		a=((pow(-1,i))/(factorial(2*i+1)))*(pow(m,2*i+1));
		y=y+a;
	}
	cout<<"el seno de "<<m<<" es "<<y<<endl;
	/*int n;
	float x;
	int expo;
	double SignoSumando;
	double base=-1;
	int potencia =1;
	long int fact=1;
	long double seno=0;
	cout << "ingrese el nivel de presicion n " << endl;
	cin >> n;
	cout << " ingrese el valor de x " << endl;
	cin >> x;
	expo = (2*n)+1;
	for (int i=1; i<= expo; i=i++)
	//for (int y=2; y<= i;y++)
	{
		SignoSumando = pow(base,i);
		potencia=pow(x,(2*i-1));
		for (int y=2; y<= expo;y++)
		{
			fact=fact*y;
		}
		seno = seno+(((SignoSumando)/(fact))*potencia);
	}
	cout << "el resultado es " << seno << endl;
	system("PAUSE");*/
	return 0;
}
