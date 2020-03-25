#include<iostream>
using namespace std;
int arr[5];
int num[5];
int ord[5];
int main()
{
	
	for(int i=0;i<5;i++)
	{
		cout<<"introduzca el numero "<<i+1<<endl;
		cin>>arr[i];
		num[i]=2*arr[i];
	}
	int n=5;
	int ord[5];
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
	ord[i] = num[i];
	}
	cout<<"los numeros ordenados son: "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"orden["<<i+1<<"] = "<<ord[i]<<endl;
	}
	
	return 0;
}
