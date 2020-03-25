#include<iostream>
using namespace std;
int numero,sum=0,res;

int main()
{
	system("color 0A");
	cout<<"ingrese el numero"<<endl;
	cin>>numero;
	if(numero<0)
	{
	cout<<endl<<-1<<endl;
	}
	else if(numero>0)
	{
		while(numero>0){
		sum=sum+numero%10;
		numero=numero/10;
		}
	res=sum%7;
	cout<<endl<<"el resto modulo 7 de la suma de cifras es: "<<res<<endl;	
	}
	return 0;
}
