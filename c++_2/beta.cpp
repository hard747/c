#include<iostream>
using namespace std;
int i,j,n;
int main()
{
	system("color 0A");	
	cout<<"introdusca el orden de las matrices cuadradas"<<endl;
	cin>>n;
	int num[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
		cout<<"introduzca el termino de la fila "<<i<<" y de la columna "<<j<<" de la matriz"<<endl;
		cin>>num[i][j];
		}
	}
	cout<<endl<<endl;
	cout<<"      MATRIZ A";
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
	int mat[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
		cout<<"introduzca el termino de la fila "<<i<<" y de la columna "<<j<<" de la matriz"<<endl;
		cin>>mat[i][j];
		}
	}
	cout<<endl<<endl;
	cout<<"      MATRIZ B";
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
	cout<<"      MATRIZ A+B";
	cout<<endl<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<"      "<<num[i][j]+mat[i][j]<<" ";
		}
	cout<<endl<<endl;	
	}
	
	return 0;
}
