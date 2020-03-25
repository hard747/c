#include<iostream>
using namespace std;

int i,j,n,t;
int min;
int main()
{
	system("color 0A");	
	cout<<"introdusca la cantidad de elementos"<<endl;
	cin>>n;
	int num[n];
	for(int i=0;i<n;i++)
	{
		cout<<"introdusca el elemento "<<i+1<<endl;
		cin>>num[i];
	}
	cout<<endl<<endl;
	cout<<"los elementos son: "<<endl;
	for(int i=0; i<n ;i++)
	
			cout<<"      "<<num[i]<<" ";
		
	cout<<endl<<endl;
	for(int i=0;i<n-1;i++)
	{
		int min = i;
		for(int j=i+1;j<n;j++)
		{
			if(num[j]<num[min])
			{
				min = j;
			}
		}	
	int tmp=num[i];
	num[i]=num[min];
	num[min]=tmp;
	}
	cout<<endl<<"los elementos ordenados son: "<<endl<<endl;
	for(int i=0; i<n ;i++)
	
			cout<<"      "<<num[i]<<" ";
		
	cout<<endl<<endl;
	
	
	return 0;
}
