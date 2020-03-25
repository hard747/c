#include<iostream>
using namespace std;
int i,j,n;
int main()
{
	system("color 0A");	
	cout<<"ingrese el orden de la matriz cuadrada"<<endl<<endl<<"   ";
	cin>>n;
	cout<<endl<<endl;
	int num[n][n];
	cout<<"          MATRIZ A"<<endl<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
		cout<<"introduzca el termino de la fila "<<i+1<<" y de la columna "<<j+1<<" de la matriz A"<<endl;
		cin>>num[i][j];
		}
	}
	cout<<endl<<endl;
		cout<<"ingrese la constante a multiplicar a la MATRIZ A"<<endl<<endl<<"   ";
		int c;
		cin>>c;
		cout<<endl<<endl;
		cout<<"          MATRIZ ("<<c<<")*A";
	cout<<endl<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<"      "<<num[i][j]*c<<" ";
		}
	cout<<endl<<endl;	
	}
	
	return 0;
}
