#include<iostream>
using namespace std;
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
	cout<<"los elementos son: "<<endl<<endl;
	for(int i=0; i<n ;i++)
	
			cout<<"      "<<num[i]<<" ";
	cout<<endl<<endl;
cout<<"introdusca el valor a buscar: "<<endl<<endl;
int clave;
cin>>clave;	
int central, bajo, alto;
int valorCentral;
//char band ='F';
bajo = 0;
alto = n-1;
while (bajo <= alto)
{
central = (bajo + alto)/2;
valorCentral = num[central]; 
if (clave == valorCentral)
{
	cout<<endl<<endl<<"el valor se encuentra en la posicion: "<<central<<endl<<endl;	
	//band = 'V';
	break;
}
else if (clave < valorCentral)
{
alto = central ; 
central=(alto +bajo)/2;
}
else
{
bajo = central ; 
central=(alto +bajo)/2;
}
}
/*if(band == 'V')
{
	cout<<endl<<endl<<"el valor se encuentra en la posicion"<<central<<endl<<endl;
}
else
{
	cout<<endl<<endl<<"el valor no se encuentra en la lista"<<endl<<endl;
}*/
return 0;
}
