//    construir un rombo
// hard 717

#include<iostream>

using namespace std;

int main()
{
	system("color 0A");
	int n,i,j;
	cout<<"introdusca el numero de lados"<<endl;
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<(n-1-i);j++)
		{
			cout<<" ";
		}
		cout<<"/";
		for(j=0;j<i*2;j++)
		{
			cout<<" ";
		}
		cout<<"\\"<<endl;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			cout<<" ";
		}
		cout<<"\\";
		for(j=0;j<(n-1-i)*2;j++)
		{
			cout<<" ";
		}
		cout<<"/"<<endl;
	}
	cin.get();
	return 0;
}
