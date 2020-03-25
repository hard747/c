#include<iostream>
using namespace std;

int i,n,t;
int main()
{
	system("color 0A");	
	cout<<"introdusca la cantidad de elementos"<<endl;
	cin>>n;
	int num[n];
	for(int i=0;i<n;i++)
	{
		cout<<"introdusca el elemento "<<i<<endl;
		cin>>num[i];
	}
	cout<<endl<<endl;
	for(int i=0; i<n ;i++)
	
			cout<<"      "<<num[i]<<" ";
		
	cout<<endl<<endl;	
	for(int i=0;i<n;i++)
	{
	for(int j=0;j<n-1;j++)
	{
		if(num[j]>num[j+1])
		{
			t=num[j];
			num[j]=num[j+1];
			num[j+1]=t;
		}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<"   "<<num[i]<<" ";
	}
	}
