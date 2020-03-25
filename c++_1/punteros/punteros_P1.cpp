#include<iostream>
using namespace std;

int *ptr;
int main()
{
	system("color 0A");
	cout<<"ingrese un numero"<<endl;
	int n;
	cin>>n;
	ptr=&n;
	*ptr=*ptr+(*ptr*5);
	cout<<"el numero mas su doble es: "<<*ptr<<endl;
	return 0;
}
