#include<iostream>
int a,b;
using namespace std;

int factorial(int x){
	if(x==0){
		x=1;	
	}
	else{
		x=x*factorial(x-1);
	}
	return x;
}

int suma(int a,int b)
{
	int c;
	c=a+b;
	return c;
}


int main()
{
	int x,y;
	cout<<"introduzca primer numero: "<<endl;cin>>a;
	cout<<"introduzca segundo numero: "<<endl;cin>>b;
	x=suma(a,b);
	cout<<x+3<<endl;
	cout<<"introduzca el numero: "<<endl;cin>>y;
	cout<<"el factorial es: "<<factorial(y)<<endl;

	return 0;
}
