#include<iostream>
using namespace std;
int n;
int main()
{
	system("color 0A");
	do
	{
	cout<<"introdusca la cantidad de elemetos: "<<endl;
	cin>>n;
	}
	while(n<0);
	int num[n];
	for(int i=0;i<n;i++)
	{
		cout<<"introdusca el elmento "<<i+1<<endl;
		cin>>num[i];	
	}
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
	cout<<"los elementos ordenados en forma ascendente son: "<<endl<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"     num["<<i+1<<"] = "<<num[i]<<endl;
	}
	return 0;
	}
