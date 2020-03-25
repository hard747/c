#include<iostream>
#include<math.h>

using namespace std;

int factorial(int n){
int fact;
if(n==0){
	fact=1;
}
else{
	fact=n*factorial(n-1);
}
return fact;
}

int main()
{
	system("color 0A");
	cout<<"introdusca el numero"<<endl;
	float k;
	cin>>k;
	float var=(3.1416)*(k)/180;
	//float p=(3.1416)*(90)/180;
	float m;
	float sum=0.0;
	for(int i=0;i<5;i++)
	{
		m=factorial(2*i+1);
		sum=sum+((pow(-1.0,2*i+1))*pow(var,(2*i+1))/(m));
	}
	cout<<"el seno de("<<k<<") es: "<<sum<<endl;
	return 0;
}
