#include<iostream>
using namespace std;
int i,j,m,n,p,q;
int main()
{
	system("color 0A");	
	cout<<"ingrese el numero de filas de la MATRIZ A"<<endl<<"   ";
	cin>>m;
	cout<<"ingrese el numero de columnas de la MATRIZ A"<<endl<<"   ";
	cin>>n;
	cout<<endl<<endl;
	do
	{
	cout<<"ingrese el numero de filas de la MATRIZ B"<<endl<<"   ";
	cin>>p;
	}
	while(p != n);
	cout<<"ingrese el numero de columnas de la MATRIZ B"<<endl<<"   ";
	cin>>q;
	cout<<endl<<endl;
	
	int num[m][n];
	cout<<"          MATRIZ A"<<endl<<endl;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
		cout<<"introduzca el termino de la fila "<<i+1<<" y de la columna "<<j+1<<" de la matriz A"<<endl;
		cin>>num[i][j];
		}
	}
	cout<<endl<<endl;
	int mat[p][q];
	cout<<"          MATRIZ B"<<endl<<endl;
	for(int i=0;i<p;i++)
	{
		for(int j=0;j<q;j++)
		{
		cout<<"introduzca el termino de la fila "<<i+1<<" y de la columna "<<j+1<<" de la matriz B"<<endl;
		cin>>mat[i][j];
		}
	}
	cout<<endl<<endl;
	cout<<"          MATRIZ A";
	cout<<endl<<endl;
	for(int i=0; i<m ;i++)
	{
		for(int j=0; j<n ;j++)
		{
			cout<<"      "<<num[i][j];
		}
	cout<<endl<<endl;	
	}
	cout<<endl<<endl;
	cout<<"          MATRIZ B";
	cout<<endl<<endl;
	for(int i=0; i<p ;i++)
	{
		for(int j=0; j<q ;j++)
		{
			cout<<"      "<<mat[i][j];
		}
	cout<<endl<<endl;	
	}
	cout<<endl<<endl;
	int prod[n];
	int sum[m][q];
	cout<<"          MATRIZ A*B";
	cout<<endl<<endl;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<q;j++)
		{
			sum[i][j]=0;
			for(int k=0;k<n;k++)
			{
				prod[k]=num[i][k]*mat[k][j];
				sum[i][j] = sum[i][j]+prod[k];
			}
		}	
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<q;j++)
		{
				cout<<"      "<<sum[i][j];
		}
	cout<<endl<<endl;
	}
	return 0;
}
