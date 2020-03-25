//                                Mostrar la primera cifra de un numero
// hard 717

#include <iostream>

using namespace std;

int main()
{
	int x;
	int r=0;
	cin >> x;
	while(x>0)
	{
		r=x%10;
		x=x/10;
	}
	cout<< r << endl;
	cin.get();
	return 0;
}
