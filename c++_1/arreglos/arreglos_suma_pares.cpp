#include<iostream>
using namespace std;
int arr[100];
int main()
{
	int suma=0;
	for(int i=0;i<200;i++)
	{
		if((i+1)%2 == 0)
		{			
		arr[i]=i+1;	
		suma= suma+arr[i];
		}
	}
	cout<<"la suma de los 100 primeros numeros pares: "<<suma<<endl;
	return 0;
}
