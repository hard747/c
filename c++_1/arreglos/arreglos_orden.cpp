#include<iostream>
using namespace std;
int num[10];
int main()
{
	system("color 0A");
	int n=10;
	for(int i=0;i<10;i++)
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
	cout<<"los elementos ordenados en forma ascendente son "<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<"     num["<<i+1<<"] = "<<num[i]<<endl;
	}
	return 0;
	}
