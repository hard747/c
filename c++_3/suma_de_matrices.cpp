#include<iostream>
using namespace std;
int i,j;
int main()
{
	system("color 0A");	
	int num[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
		cout<<"introduzca el termino de la fila "<<i<<" y de la columna "<<j<<" de la matriz"<<endl;
		cin>>num[i][j];
		}
	}
	cout<<endl<<endl;
	cout<<"      MATRIZ A";
	cout<<endl<<endl;
	for(int i=0; i<3 ;i++)
	{
		for(int j=0; j<3 ;j++)
		{
			cout<<"      "<<num[i][j]<<" ";
		}
	cout<<endl<<endl;	
	}
	cout<<endl<<endl;
	int mat[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
		cout<<"introduzca el termino de la fila "<<i<<" y de la columna "<<j<<" de la matriz"<<endl;
		cin>>mat[i][j];
		}
	}
	cout<<endl<<endl;
	cout<<"      MATRIZ B";
	cout<<endl<<endl;
	for(int i=0; i<3 ;i++)
	{
		for(int j=0; j<3 ;j++)
		{
			cout<<"      "<<mat[i][j]<<" ";
		}
	cout<<endl<<endl;	
	}
	cout<<endl<<endl;
	cout<<"      MATRIZ A+B";
	cout<<endl<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"      "<<num[i][j]+mat[i][j]<<" ";
		}
	cout<<endl<<endl;	
	}
	
	return 0;
}
