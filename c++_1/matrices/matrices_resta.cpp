#include<iostream>
using namespace std;
int i,j,n;
int main()
{
	system("color 0A");	
	cout<<"ingrese el orden de la matris cuadrada"<<endl<<endl<<"   ";
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
	int mat[n][n];
	cout<<"          MATRIZ B"<<endl<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
		cout<<"introduzca el termino de la fila "<<i+1<<" y de la columna "<<j+1<<" de la matriz B"<<endl;
		cin>>mat[i][j];
		}
	}
	cout<<endl<<endl;
	cout<<"          MATRIZ A";
	cout<<endl<<endl;
	for(int i=0; i<n ;i++)
	{
		for(int j=0; j<n ;j++)
		{
			cout<<"      "<<num[i][j]<<" ";
		}
	cout<<endl<<endl;	
	}
	cout<<endl<<endl;
	cout<<"          MATRIZ B";
	cout<<endl<<endl;
	for(int i=0; i<n ;i++)
	{
		for(int j=0; j<n ;j++)
		{
			cout<<"      "<<mat[i][j]<<" ";
		}
	cout<<endl<<endl;	
	}
	cout<<endl<<endl;
	cout<<"          MATRIZ A-B";
	cout<<endl<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<"      "<<num[i][j]-mat[i][j]<<" ";
		}
	cout<<endl<<endl;	
	}
	
	return 0;
}
