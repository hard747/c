#include<iostream>

using namespace std;

int main()
{	
cout<<"introduzca la cantidad de numeros:"<<endl;
int n;
cin>>n;
int num[n];
for(int i=0;i<n;i++)
{
	cout<<"introduzca el "<<i+1<<" numero"<<endl;
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
system("cls");	
cout<<endl<<"el menor numero es: "<<num[0]<<endl<<endl;
cout<<"el mayor numero es: "<<num[n-1]<<endl;
return 0;
}
