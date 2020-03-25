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
	string n;
	cin>>n;
	string *cad = &n;
	cout<<*(cad+2);
	//char sum;
	//int cont=0;
	/*for(int i=0;i<5;i++)
	{
		cout<<*(cad+i);
	
		//sum = *(cad+i);
		/*for(int j=0;j<5;j++)
		{
			if(*(cad+i) == *(ptr+j))
			{
				cont=cont+1;
			}
		}
	}*/
	//cout<<endl<<"la cantidad de vocales en la cadena es: "<<cont<<endl;
	
	return 0;
}
