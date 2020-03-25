#include<iostream>
using namespace std;

int num1[5];
int num2[5];
int n,i,j,a;
int main()
{
	system("color 0A");
	for(int i=0;i<5;i++)
	{
		cout<<"introdusca en el primer arreglo el elemento "<<i+1<<endl;
		cin>>num1[i];
	}
	for(int i=0;i<5;i++)
	{
		cout<<"introdusca en el segundo arreglo el elemento "<<i+1<<endl;
		cin>>num2[i];
	}
	int arr[10];
	for(int k=0;k<5;k++)
	{
		arr[k]=num1[k];
		cout<<"      arr["<<k+1<<"] = "<<arr[k]<<endl;
	}
	for(int a=0;a<5;a++)
	{
			arr[a]=num2[a];
			cout<<"      arr["<<a+6<<"] = "<<arr[a]<<endl;
	}
	return 0;
}
