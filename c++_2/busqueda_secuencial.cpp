#include<iostream>
using namespace std;

int i,j,n,t;
int min;
int main()
{
	system("color 0A");	
	cout<<"introdusca la cantidad de elementos"<<endl;
	cin>>n;
	int num[n];
	for(int i=0;i<n;i++)
	{
		cout<<"introdusca el elemento "<<i+1<<endl;
		cin>>num[i];
	}
	cout<<endl<<endl;
	cout<<"los elementos son: "<<endl;
	for(int i=0; i<n ;i++)
	
			cout<<"      "<<num[i]<<" ";
		
	cout<<endl<<endl;
	bool var=false;
	cout<<"introdusca el elemento a buscar: "<<endl<<endl;
	int elem;
	cin>>elem;
	for(int i=0;i<n;i++)
	{
		if(elem == num[i])
		{
			cout<<endl<<"el elemento se encuentra en la posicion: "<<i<<endl<<endl;
			var = true;
		}
	}
	if(var == false)
	{
	cout<<endl<<"elemento no encontrado en la lista"<<endl<<endl;
	}
	return 0;
}
