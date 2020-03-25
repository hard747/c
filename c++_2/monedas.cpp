#include <iostream>
using namespace std;


typedef float s;
int n;
int main () 
{
	system("color 0A");
	cout<<"ingrese el precio del articulo"<<endl;
	s p;
	cin>>p;
	cout<<"ingrese el dinero "<<endl;
	s m;
	cin>>m;
	
	if(m<p) n=0;
	else if(m>=p)n=1;
	
	switch(n){
	case 0: cout<<"falta dinero "<<endl; break;
	case 1: cout<<"el vuelto es: "<<m-p<<" soles"<<endl; break;	
	}
	return 0;
}
