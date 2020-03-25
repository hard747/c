#include<iostream>
using namespace std;
/*int i;
int hash[i];
void bus(int hash[i];int n)
{
	for(int j=0;j<i;j++)
		{
			if(hash[i] == hash[j%(n)])
			{
				hash[i]=(hash[i]+1)%(n);
				bus(hash[i], int n)
			}
		}
}*/
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
	
	/*	for(int i=0;i<n-1;i++)
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
	{
			cout<<"      "<<num[i]<<" ";
	}
	cout<<endl<<endl;*/
	
	int mod[n];
	int i;
	cout<<"los modulos son: "<<endl<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"  "<<num[i]%n<<" ";
	}
	
		for(int i=0;i<n-1;i++)
	{
		int min = i;
		for(int j=i+1;j<n;j++)
		{
			if(num[j]%n<num[min]%n)
			{
				min = j;
			}
		}	
	int tmp=num[i]%n;
	num[i]=num[min]%n;
	num[min]=tmp;
	}
	
	cout<<endl<<endl<<"los modulos ordenados son: "<<endl<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"  "<<num[i]%n<<" ";
	}
		
	cout<<endl<<endl;
	int item[n];
	int hash[n];
	
	cout<<"los hash respectivamente son: "<<endl<<endl;
	for(int i=0; i<n ;i++)
	{
		hash[i]=num[i]%(n);
		for(j=0;j<i;j++)
		{
			if(hash[i] == hash[j%(n)])
			{
				hash[i]=(hash[i]+1)%(n);
				if(hash[n-1]==0)
				{
					for(j=0;j<i;j++)
					{
					if(hash[n-1] == hash[j])
					{
						hash[n-1]=(hash[n-1]+1)%n;
					}
					}
				}
			}	
		}
	
		cout<<"      "<<hash[i]<<"  ";
	}
cout<<"introdusca el elemento a buscar: "<<endl;
int clave;
cin>>clave;

	
	return 0;
}
