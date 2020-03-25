#include<iostream>
using namespace std;
int i,j,n;
int main()
{
	system("color 0A");	
	
	int num[2][3]={30,50,40,70,80,60};
	cout<<"          MATRIZ P.PISCO";
	cout<<endl<<endl;
	for(int i=0; i<2 ;i++)
	{
		for(int j=0; j<3 ;j++)
		{
			cout<<"      "<<num[i][j]<<" ";
		}
	cout<<endl<<endl;	
	}
	cout<<endl<<endl;
	int mat[2][3]={20,70,30,60,50,40};
	cout<<"          MATRIZ P.AREQUIPA";
	cout<<endl<<endl;
	for(int i=0; i<2 ;i++)
	{
		for(int j=0; j<3 ;j++)
		{
			cout<<"      "<<mat[i][j]<<" ";
		}
	cout<<endl<<endl;	
	}
	cout<<endl<<endl;
	cout<<"          MATRIZ P.TOTAL";
	cout<<endl<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"      "<<num[i][j]+mat[i][j]<<" ";
		}
	cout<<endl<<endl;	
	}
	cout<<"          MATRIZ NUEVA P.TOTAL";
	cout<<endl<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"      "<<(0.6)*(num[i][j])+(0.8)*(mat[i][j])<<" ";
		}
	cout<<endl<<endl;	
	}
	
	return 0;
}
