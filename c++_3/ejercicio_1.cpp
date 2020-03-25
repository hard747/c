//Ejercicio 1
#include <iostream>
#include <cstring> //libreria que nos ayuda para
				  //utilizar los caracteres (char)
using namespace std; 
//Definimos la superclase persona
class persona //superclase 
{
	public:
		//Definimos nuestro constructor "persona"
		persona(char[30] = "",int = 1);
		//empleado(char[30],int = 1);//30=longitud del nombre 
		//Funciones Miembro:
		void establecerEdad(int);//edad: enteros
		void mostrarEdad(void);
		void establecerNombre(char[30]);//nombre:30 caracteres
		void mostrarNombre(void);
	private:
		//definimos los atributos de la superclase "persona"
		int edad;
		char nombre[30];
};
//Definimos la subclase empleado asociado a la superclase
//persona
class empleado: public persona
{
	public:
		//Definimos nuestro constructor "empleado"
		empleado(char[30] = "",int = 1,double = 0);
		//empleado(char[30],int = 1);//30=longitud del nombre 
		//Funciones Miembro:
		void establecerSueldo(double=0);
		void mostrarSueldo(void);
	private:
		//Atributo exclusivo de la clase empleado
		double sueldo;
};

//Definimos la clase obrero asociado a la superclase
//empleado
class obrero: public empleado
{
	public:
		//Definimos el constructor "obrero"
		//Se construye con obrero con 30 digitos de nombre
		//con valor inicial en la edad de 1, con valor
		//inicial de sueldo de  0 y con un cargo 30 digitos
		obrero(char[30] = "", int = 1, double = 0, char[30] ="Cargo");
		//Funciones Miembro:
		void establecerCargo(char[30]);
		void mostrarCargo(void);
	private: 
		//Definimos los atributos exclusivos de la
		//subclase obrero
		char cargo[30];
};

// Definimos la subclase médico asociado a la
// superclase empleado
class medico : public empleado
{
	public:
		//Definimos el constructor "medico"
		//Se construye un médico con un nombre de 30 
		//caracteres, valor inicial de edad 1,valor inicial
		//de sueldo 0 y con valor inicial de 
		//pacientes 0 
		medico(char[30] = "",int = 1, double = 0 , int =0);
		void establecerNumPacientes(int);
		void mostrarNumPacientes(void);
	private:
		//Definimos los atributos exclusivos de la
		//subclase medico
		int NumPacientes;
};
//Describimos el constructor "persona" asociado a la clas
//persona
persona::persona(char nom[30],int ed)
{
	establecerEdad(ed);
	establecerNombre(nom);
}
//Describimos la funcion establecerEdad asociado a la 
//clase persona
void persona::establecerEdad(int ed)
{
	edad=ed;
}
//Describimos la función mostrarEdad asociado a la clase
//persona
void persona::mostrarEdad(void)
{
	cout<<"Edad="<<edad<<endl;
}
//Describimos la función establecerNombre asociado a la
//la clase persona
void persona::establecerNombre(char nom[30])
{
	strcpy(nombre,nom);
}
//Describimos la función mostrarNombre asociado a la 
//clase persona
void persona::mostrarNombre(void)
{
	cout<<"Nombre: "<<nombre<<endl;
}
//Describimos el constructor asociado a la clase
//empleado
empleado::empleado(char nom[30],int ed, double suel)
{
	establecerEdad(ed);
	establecerNombre(nom);
	establecerSueldo(suel);
}
//Describimos la función establecerSueldo asociado
//a la clase empleado
void empleado::establecerSueldo(double suel)
{
	sueldo=suel;
}
//Describimos la función mostrarSueldo asociado
//a la clase empleado
void empleado::mostrarSueldo(void)
{
	cout<<"Sueldo = "<<sueldo<<endl;
}
//Describimos la función establecerCargo asociado
//a la clase obrero
void obrero::establecerCargo(char car[30])
{
	strcpy(cargo,car);
}
//Describimos la función mostrarSueldo asociado
//a la clase obrero
void obrero::mostrarCargo(void)
{
	cout<<"Cargo = "<<cargo<<endl;
}
//Describimos el constructor asociado
//a la clase obrero
obrero::obrero(char nom[30],int ed, double suel,char car[30])
{
	establecerEdad(ed);
	establecerNombre(nom);
	establecerSueldo(suel);
	establecerCargo(car);
}
//Describimos el constructor asociado
//a la clase medico

medico::medico(char nom[30],int ed,double suel,int num)
{
	establecerEdad(ed);
	establecerNombre(nom);
	establecerSueldo(suel);
	establecerNumPacientes(num);
}
//Describimos la función establerNumPacientes asociado
//a la clase medico
void medico::establecerNumPacientes(int num)
{
	NumPacientes=num;
}
//Describimos la función mostrarPacientes asociado
//a la clase medico
void medico::mostrarNumPacientes(void)
{
	cout<<"Numero de Pacientes = "<<NumPacientes<<endl;
}
//Función Principal
int main()
{
	//Creamos al objeto persona1 asociado a la clase
	//obrero
	obrero persona1("Alexander",52,1000.50,"albanil");
	persona1.mostrarNombre();
	persona1.mostrarEdad();
	persona1.mostrarSueldo();
	persona1.mostrarCargo();
	cout<<" - - - "<<endl;
	//Creamos al objeto persona2 asociado a la clase
	//medico
	medico persona2("Oliver",36,4800.90,10);
	persona2.mostrarNombre();
	persona2.mostrarEdad();
	persona2.mostrarSueldo();
	persona2.mostrarNumPacientes();
	
	system("pause");
	return 0;
}

