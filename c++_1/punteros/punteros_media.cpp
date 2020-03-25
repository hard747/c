#include<iostream>
using namespace std;

int n=5;
int *ptr;
int main()
{
	int arr[n];
	system("color 0A");
	for(int i=0;i<n;i++)
	{
	cout<<"introdusca el elemento: "<<i+1<<endl;
	cin>>arr[i];
	}
	double sum;
	double acum=0;
    ptr = arr;
	for(int i=0;i<5;i++)
	{
		sum=*( ptr+i );
		acum=acum+sum;
	}
	cout<<"la media es: "<<acum/n<<endl;
	return 0;
}
