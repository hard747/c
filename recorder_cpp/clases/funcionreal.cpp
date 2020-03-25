#include<iostream>
int a,b;
using namespace std;

void suma(int a,int b)
{
	cout<<a+b<<endl;
}


int main()
{
	cout<<"introduzca primer numero: "<<endl;cin>>a;
	cout<<"introduzca segundo numero: "<<endl;cin>>b;
	suma(a,b);
	return 0;
}
