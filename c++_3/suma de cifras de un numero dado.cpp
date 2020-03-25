//                                suma de cifras de un numero dado.
//     hard 717

#include <iostream>

using namespace std;

int suma (int x)
{
	int suma =0;
	while(x>0)
	{
		suma=suma+(x%10);
		x=x/10;		
	}
	return (suma);

}


int main()
{
	
		int i ;
		cout<<"introdusca numero"<<endl;
		cin>> i;
		cout<< suma(i) <<" ";
		
	cin.get();
	return 0;
}
