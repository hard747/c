#include<iostream>
using namespace std;
int i,j,k,n;
int main()
{
	system("color 0A");	
	cout<<"ingrese el orden de la MATRIZ A"<<endl<<"   ";
	cin>>n;
	cout<<endl<<endl;
	
	double
	 num[n][n];
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
	
	cout<<"          MATRIZ A";
	cout<<endl<<endl;
	for(int i=0; i<n ;i++)
	{
		for(int j=0; j<n ;j++)
		{
			cout<<"      "<<num[i][j];
		}
	cout<<endl<<endl;	
	}
	int prod[n][n];
	cout<<endl;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<n;k++)
			{	
				if(i!=k && j!=i && k!=j)
				{
					if(((k==0)&&(i==1)&&(j==2))||((k==1)&&(i==2)&&(j==0))||((k==2)&&(i==0)&&(j==1)))
					{
						prod[i][j]=num[0][k]*num[1][i]*num[2][j];
					}
					else
					{
						prod[i][j]=(-1)*num[0][k]*num[1][i]*num[2][j];
					}
					sum = sum+prod[i][j];
				}
			}
		}
	}
	cout<<"      EL DETERMINANTE DE LA MATRIZ A: "<<sum<<endl<<endl;
	return 0;
}
