#include<iostream>
#include<math.h>
#define p 0.017453
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
	//m=k*p;
	
	for(int i=0;i<=5;i++)
	{
		a=((pow(-1,i))/(factorial(2*i+1)))*(pow(k,2*i+1));
		y=y+a;
		cout<<"iteracion "<<i<<" es "<<y<<endl;
	}
	cout<<endl<<"el seno de "<<k<<" grados es "<<y<<endl;
	return 0;
}
