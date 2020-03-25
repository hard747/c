#include<iostream>
#include<math.h>
using namespace std;
int factorial(int n)
{
	int x;
	if(n==0)
	{
		x=1;
	}
	else
	{
		x=n*factorial(n-1);
	}
	
	return x;
}

int main()
{
	system("color 0A");
	cout<<"introduzca el numero del cual desea calcular el seno:"<<endl;float n;
	cin>>n;float s=0;
	for(int i=0;i<=10;i++)
	{
		s=s+(pow(-1,i)*pow(n,2*i+1))/(factorial(2*i+1));
	}
	cout<<endl<<"     sen("<<n<<") = "<<s<<endl;
	return 0;
}
