//                   Mostrar los numeros entre 2 valores tales que su suma de cifras sea igual a un valor dado.
//     hard 717

#include <iostream>

using namespace std;

int suma (int x)
{
	int suma =0;
	while(x>0)/* en vez de este while aqui podrias meter tu switch case pero tendrias que hacerlo varias veces dependdiendo del 
	numero de cifras xdd*/
	{
		suma=suma+(x%10);
		x=x/10;		
	}
	return (suma);
	
}

int main()
{
		system("color 0A");
		system("mode con cols=170");
		int i,j,m,n;
		cout<<"minimo"<<endl;//peticion y entrada de datos
		cin>>j;
		cout<<"maximo"<<endl;
		cin>> m ;
		cout<<"suma de cifras"<<endl;
		cin>> n ;
		
		for(i=j; i<=m ;i++)
		{
			
		if(suma(i)==n)
		{
		cout<< i <<" ";
		}
		
		}
		
	cin.get();
	return 0;
}
