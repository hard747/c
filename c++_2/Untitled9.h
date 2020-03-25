#include<iostream>
#include<cstream>

using namespace std;

class persona
{
	public:
		persona(const char *n)
		{
			strcpy(nombre,n);
		}
		persona(const persona &p);
		
		virtual void mostrar()
		{
			cout<<nombre<<endl;
		}
		virtual persona *clonar()
		{
			return new persona(*this);
		}
		
	protected:	
		char nombre[20]:	
};

persona::persona(const persona &p)
{
	strcpy(nombre,p.nombre);
	cout<<"per: constructor copia"<<endl;
}
