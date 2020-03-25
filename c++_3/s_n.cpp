#include <iostream>
using namespace std;

char car;
int sum;
int main () 
{
	system("color 0A");
	sum=0;
	do{
		
		sum = sum +1;
		cout << " Desea continuar S/N" << endl;
		cin >> car;
	}
	while(car=='S');
	cout << "La suma es: " << sum-1<<endl;
	return 0;
}
