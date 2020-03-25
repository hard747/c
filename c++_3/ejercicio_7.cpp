/*Ejercicio 7
c. Se desea implementar una aplicación que nos
 muestre los nombres de dos personas, un estudiante
  y un empleado. El empleado Robert solo se dedica
  a trabajar y el estudiante Juan solo se dedica
 a sus labores académicas. Además utilice una 
 función virtual "clonar" en la clase base que se
  superpondrá para cada clase derivada y una función
   para mostrar el nombre indicando el constructor
    respectivo usando punteros.
*/
#include <iostream>
#include <cstring> //uso del tipo de dato char
using namespace std; //uso del cin y cout

//Definimos la superclase Persona
class Persona
{
	public:
		//Definimos el Constructor usando punteros
		Persona(const char *n)
		{
			strcpy(nombre,n);// nombre=n
		}	
		//Constructor Copia apuntando a "Persona"
		Persona(const Persona &p);
		//Función Virtual "Mostrar"
		virtual void Mostrar()
		{
			cout<<nombre<<endl;
		}
		//Función Virtual "Clonar" asociada con 
		//punteros a Persona
		virtual Persona* Clonar()
		{
			//Retornar una nueva "Persona"
			return new Persona(*this);
		}
	protected:
		//Defino la variable "nombre" de tipo de
		// dato char
		char nombre[20];
};

//Definino el Constructor Copia
Persona::Persona(const Persona &p)
{
	strcpy(nombre,p.nombre);//nombre=p.nombre
	cout<<"Per: constructor copia"<<endl;
}
//Defino al subclase Empleado asociado a la
//superclase Persona
class Empleado:public Persona
{
	public:
		//Definimos el constructor Empleado
		//asociado al constructor Persona
		Empleado(const char *n):Persona(n) {}
		//Constructor Copia apuntando a Empleado
		Empleado(const Empleado &e);
		//Función Mostrar
		void Mostrar()
		{
			cout<<"El empleado es: "<<nombre<<endl;
		}
		//Función Virtual Clonar asociado con 
		//punteros a "Persona"
		virtual Persona* Clonar()
		{
			return new Empleado(*this);
		}
};
//Definimos el constructor copia
Empleado::Empleado(const Empleado &e):Persona(e)
{
	cout<<"Emp: constructor copia"<<endl;
}

//Definimos la subclase Estudiante asociada a 
//la superclase Persona
class Estudiante:public Persona
{
	public:
		//Definimos el constructor Estudiante
		//asociado al constructor Persona
		Estudiante(const char *n):Persona(n) {}
		//Constructor Copia
		Estudiante(const Estudiante &e);
		//Función Mostrar
		void Mostrar()
		{
			cout<<"El estudiante es: "<<nombre<<endl;
		}
		//Función Virtual Clonar asociada a la
		//superclase Persona
		virtual Persona* Clonar()
		{
			return new Estudiante(*this);
		}
};
//Definir el constructor copia
Estudiante::Estudiante(const Estudiante &e):Persona(e)
{
	cout<<"Est: constructor copia"<<endl;
}
//Función Principal
int main()
{
	//Creamos los objetos Personita1 y Personita2
	//empleando punteros y asociados a la 
	//superclase Persona
	Persona *Personita1=new Estudiante("Juan");
	Persona *Personita2=new Empleado("Robert");
	//Creamos un objeto Gente de dimensión 2
	// empleado punteros asociado a la 
	//superclase Persona
	Persona *Gente[2];
	//A los objetos Personita1 y Personita2 
	//los apuntamos a la función Mostrar
	Personita1->Mostrar();
	Personita2->Mostrar();
	
	//EMPLEAMOS LOS CONSTRUCTORES COPIA Y
	//LA FUNCION CLONAR()
	//Al primer elemento de "Gente" le doy el 
	//valor donde el objeto Personita1 apunte
	//a la función Clonar()
	Gente[0]=Personita1->Clonar();
	//Gente[0] apuntar a la función Mostrar
	Gente[0]->Mostrar();
	
	Gente[1]=Personita2->Clonar();
	Gente[1]->Mostrar();
	/*
	delete Personita1;
	delete Personita2;
	delete Gente[0];
	delete Gente[1];
	*/
	system("pause");
	return 0;
}
