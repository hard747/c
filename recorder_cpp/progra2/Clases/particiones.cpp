#include<iostream>
using namespace std;
int n,k;
int main()
{
	cout<<"introduzca la cantidad de elementos de la particion en x"<<endl;
	cin>>n;
	cout<<"introduzca la cantidad de elementos de la particion en y"<<endl;
	cin>>k;cout<<endl<<endl;
	float x[n],y[n],p,r,l=0,u=0,m[n][n];
	system("color 0A");
	for(int i=0;i<n;i++)
	{
	cout<<"introduzca el punto "<<i+1 <<" de la particion de [0,1] en el eje x"<<endl;
	cin>>x[i];
	}
	cout<<endl<<endl;
	for(int i=0;i<k ;i++)
	{
	cout<<"introduzca el punto "<<i+1 <<"  de la particion de [0,1] en el eje y"<<endl;
	cin>>y[i];
	}
	system("cls");
	cout<<"La particion es: "<<endl<<endl<<"  {";
	for(int i=0;i<n;i++)
	{
		if(i!=n-1)
	{
	cout<<x[i]<<", ";
	}
	else
	{
		cout<<x[n-1]<<"}x{";
	}
	}
	for(int i=0;i<k ;i++)
	{
		if(i!= k-1)
		{
		cout<<y[i]<<", ";
		}
		else
	{
		cout<<x[k-1]<<"}";
	}	
	}cout<<endl;
	//algoritmo del lower
	for(int i=0;i<n-1;i++)
	{
	for(int j=0;j<k-1;j++)
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
	for(int i=0;i<n-1;i++)
	{
	for(int j=0;j<k-1;j++)
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
