#include<iostream>
#include<string>
using namespace std;
char *ptr;
int main()
{
	system("color 0A");
	char vocal[5]={'a','e','i','o','u'};
	ptr=vocal;
	cout<<"introdusca una cadena: "<<endl<<endl;
	char cadena[100];
	//cin.getline(cadena,100); //cin.getline: Se utiliza para variables de tipo "char"
	cin>>cadena;
	char *cad;
	cad = cadena;
	char sum;
	int cont=0;
	for(int i=0;i<100;i++)
	{	
		for(int j=0;j<5;j++)
		{
			sum = *(cad+i);
			if(sum == *(ptr+j))
			{
				cont=cont+1;
			}
		}
	}
	cout<<endl<<"la cantidad de vocales en la cadena es: "<<cont<<endl;
	
	return 0;
}
