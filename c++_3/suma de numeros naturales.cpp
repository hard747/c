// suma de numeros naturales hasta un valor dado
// marius hard717

#include<iostream>

using namespace std;

int main()
{
	int i,n,suma=0;
	cout<<"introdusca numero"<<endl;
	cin>> n;
	for(i=1;i<=n;i++)
	{
		suma=suma  + i;
	}
	cout<< suma<<endl;
	cin.get();
	return 0;
}
