#include<iostream>
using namespace std;
int arr[5];
int par[5];
int main()
{
	int suma=0;
	for(int i=0;i<5;i++)
	{
		cout<<"introduzca el numero "<<i+1<<endl;
		cin>>arr[i];
		par[i]=2*arr[i];
		//suma= suma+arr[i];
	}
	cout<<"los numeros multiplicados por dos son: "<<endl;
	for(int i=0;i<5;i++)
	{
		//cout<<"introduzca el numero "<<i+1<<endl;
		cout<<par[i]<<"  ";
		//suma= suma+arr[i];
	}
	//cout<<"la suma de numeros es: "<<suma/10<<endl;
	return 0;
}
