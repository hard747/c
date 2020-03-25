#include<iostream>
using namespace std;
int arr[10];
int main()
{
	int suma=0;
	for(int i=0;i<10;i++)
	{
		cout<<"introduzca el numero "<<i+1<<endl;
		cin>>arr[i];
		suma= suma+arr[i];
	}
	cout<<"la suma de numeros es: "<<suma/10<<endl;
	return 0;
}
