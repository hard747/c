#include<iostream>
using namespace std;
int m,p;

int main()
{
	system("color 0A");
	cout<<"ingrese la cantidad de elementos del arreglo 1 "<<endl;
	cin>>m;
	int arr1[m];
	cout<<endl<<endl;
	for(int i=0;i<m;i++){
	cout<<"ingrese el numero "<<i+1<<" del arreglo 1: "<<endl;
	cin>>arr1[i];
	}
	cout<<endl<<"ingrese la cantidad de elementos del arreglo 2 "<<endl;
	cin>>p;
	int arr2[p];
	cout<<endl<<endl;
	for(int i=0;i<p;i++){
	cout<<"ingrese el numero "<<i+1<<" del arreglo 2: "<<endl;
	cin>>arr2[i];
	}
	
	int n; n=m+p;int t;int arr3[n];
	
	for(int i=0;i<m;i++){
	arr3[i]=arr1[i];
	}
	
	for(int i=m;i<n;i++){
	arr3[i]=arr2[i-m];
	}
	
	for(int i=0;i<n;i++)
	for(int j=0;j<n-1;j++)
	{
		if(arr3[j]>arr3[j+1])
		{
			t=arr3[j];
			arr3[j]=arr3[j+1];
			arr3[j+1]=t;
		}
		}
	cout<<endl<<"el orden ascendente es: "<<endl<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"  "<<arr3[i]<<"  ";
	}
	
	
	return 0;
}
