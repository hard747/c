#include<iostream>
using namespace std;

int a;
int main()
{
	system("color 0A");	
	int num[3][3];
	num[0][0] =1;
	num[0][1] =2;
	num[0][2] =3;
	num[1][0] =4;
	num[1][1] =5;
	num[1][2] =6;
	num[2][0] =7;
	num[2][1] =8;
	num[2][2] =9;
	cout<<endl<<endl;
	for(int i=0; i<3 ;i++)
	{
		for(int j=0; j<3 ;j++)
		{
			cout<<"      "<<num[i][j]<<" ";
		}
	cout<<endl<<endl;	
	}
	int mat[3][3];
	mat[0][0] =9;
	mat[0][1] =8;
	mat[0][2] =7;
	mat[1][0] =6;
	mat[1][1] =5;
	mat[1][2] =4;
	mat[2][0] =3;
	mat[2][1] =2;
	mat[2][2] =1;
	cout<<endl;
	for(int i=0; i<3 ;i++)
	{
		for(int j=0; j<3 ;j++)
		{
			cout<<"      "<<mat[i][j]<<" ";
		}
	cout<<endl<<endl;	
	}
	
	int sum[3][3];
	sum[0][0] =num[0][0]+mat[0][0];
	sum[0][1] =num[0][1]+mat[0][1];
	sum[0][2] =num[0][2]+mat[0][2];
	sum[1][0] =num[1][0]+mat[1][0];
	sum[1][1] =num[1][1]+mat[1][1];
	sum[1][2] =num[1][2]+mat[1][2];
	sum[2][0] =num[2][0]+mat[2][0];
	sum[2][1] =num[2][1]+mat[2][1];
	sum[2][2] =num[2][2]+mat[2][2];
	cout<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"      "<<sum[i][j]<<" ";
		}
	cout<<endl<<endl;	
	}
	
	return 0;
}
