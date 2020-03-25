#include<iostream>
using namespace std;
int n,k;
int main()
{

	double x[501],p,r,l=0,u=0,m[501][501];
	double y[501],t,q=1,z=100;
	t=q/z;
	system("color 0A");x[0]=-100;y[0]=-100;
	
	for(int i=0;i<501;i++)
	{
		x[i+1]=x[i]+0.4;
	}
	for(int i=0;i<501 ;i++)
	{
	x[i]=x[i]/z;
	}
	
	for(int i=0;i<501 ;i++)
	{
		y[i+1]=y[i]+0.4;
	}
	for(int i=0;i<501 ;i++)
	{
		y[i]=y[i]/z;
	}
	
	
	for(int i=0;i<501;i++)
	{
		cout<<x[i]<<" ";
	}cout<<endl<<endl;
	for(int i=0;i<501; i++)
	{ 
		cout<<y[i]<<" ";
	}
	//system("cls");

	//algoritmo del lower
	for(int i=0;i<500;i++)
	{
	for(int j=0;j<500;j++)
	{
		if((-2<=x[i]+y[j]) && (y[j]+x[i]<-1))
	{
		m[i][j]=-2;  
	}
	else if((-1<=x[i]+y[j]) && (y[j]+x[i]<0))
	{
		m[i][j]=-1;
	}
	else if((0<=x[i]+y[j]) && (y[j]+x[i]<1))
	{
		m[i][j]=0;
	}
	else if((1<=x[i]+y[j]) && (y[j]+x[i]<2))
	{
		m[i][j]=1;
	}
	
		p=(x[i+1]-x[i])*(y[j+1]-y[j])*(m[i][j]);
		l=l+p;
	}
	}
	//algoritmo del upper
	for(int i=0;i<500;i++)
	{
	for(int j=0;j<500;j++)
	{
		if((-2<=x[i+1]+y[j+1]) && (y[j+1]+x[i+1]<-1))
	{
		m[i][j]=-2;
	}
	else if((-1<=x[i+1]+y[j+1]) && (y[j+1]+x[i+1]<0))
	{
		m[i][j]=-1;
	}
	else if((0<=x[i+1]+y[j+1]) && (y[j+1]+x[i+1]<1))
	{
		m[i][j]=0;
	}
	else if((1<=x[i+1]+y[j+1]) && (y[j+1]+x[i+1]<2))
	{
		m[i][j]=1;
	}
	else if(x[i+1]+y[j+1]==2)
	{
		m[i][j]=2;
	}
	
		r=(x[i+1]-x[i])*(y[j+1]-y[j])*(m[i][j]);
		u=u+r;
	}
	}
	 cout<<endl<<endl<<"  el lower es:"<<l<<endl;
	 cout<<endl<<"  el upper es:"<<u<<endl;
	
	}
