//Implementarlo en C++, tenga en cuenta que la clase 
//persona consta de una propiedad o dato miembro, y 
//cinco métodos o funciones.
#include <iostream>
using namespace std; //uso de cin - cout
//definimos la clase PERSONA
class persona
{
	public:
		//definimos las funciones
		void dormir();
		void hablar();
		void contar();
		void adquirirNombre();
		void decirNombre();
	private:
		//definimos el Atributo nombre de 20 caracteres
		char nombre[20];	
};
//Declaramos cada una de las funciones de la clase 
// Persona indicando su respectivo proceso
void persona::dormir()
{
	cout<<"...zzz..."<<endl;
}
void persona::hablar()
{
	cout<<" Hola Cachimbo "<<endl;
}
void persona::contar()
{
	cout<<"1,2,3,4,..."<<endl;
}
void persona::adquirirNombre()
{
	cout<<"Soy una persona. Dame un nombre= ";
	cin>>nombre;
}
void persona::decirNombre()
{
	cout<<"Mi nombre es= "<<nombre<<endl;
}
//Función Principal
int main()
{
	int respuesta=0;
	//Creamos una persona
	cout<<"Desea crear a una persona? 1=Si,0=No: ";
	cin>>respuesta;
		
	if (respuesta==1)
	{
		//Creamos el objeto1 asociado a la clase PERSONA
		persona objeto1;
		objeto1.adquirirNombre();
		//Si el usuario acepta crear a una persona
		cout<<"Desea que te diga mi nombre?. 1=Si,0=No: ";
		cin>>respuesta;
		
		if (respuesta==1)
		{
			objeto1.decirNombre();	
		}
		//El usuario decide si la persona creada hable o no
		cout<<"Quieres que hable? 1=Si,0=No: ";
		cin>>respuesta;
		
		if (respuesta==1)
		{
			objeto1.hablar();
		}
		//El usuario decide si la persona creada va a
		// contar o no
		cout<<"Deseas que cuente? 1=Si,0=No: ";
		cin>>respuesta;
		if (respuesta==1)
		{
			objeto1.contar();
		}
		//El usario decide si la persona creada se va
		// a dormir o no
		cout<<"Desea que vaya a dormir? 1=Si,0=No: ";
		cin>>respuesta;
		
		if (respuesta==1)
		{
			objeto1.dormir();
		}
		
	}
	system("pause");
	return 0;
}
