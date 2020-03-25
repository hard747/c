//Ejercicio 04-c: Se desea crear una clase Persona 
//que debe de poseer la siguiente informaci�n: nombre,
// apellido, n�mero de piernas, n�mero de brazos,
// n�mero de cabeza, peso, altura, color de ojos y 
// color de pelo. Considere los valores constantes
//  nombre=�Pepito�, apellido=�Ponce�, n�mero de 
// piernas=2, n�mero de brazos=2, n�mero de cabeza=1,
// peso=72.5 kg, altura=1.82 m, color de ojos=�negros�
// y color de pelo=�negro� (definidos dentro del programa).
// Adem�s implementa el constructor respectivo.

#include<iostream>
using namespace std; //uso del cin y cout
//Clase Persona
class Persona
{
	private:
		//declaro variables enteras que no cambiar�n
		int npiernas;//numero de piernas
		int nbrazos;//numero de brazos
		int ncabeza; //numero de cabeza
		//declaro variables de cadena de caracteres
		string nnombre;
		string napellido;
	public:
		//Constructor Persona asociado a la clase Persona
		Persona(string n,string a);
		//Funciones Miembros(Enteras):
		//Funci�n para mostrar el n�mero de piernas
		int piernas() 
		{
			return npiernas;
		}
		//Funci�n para mostrar el n�mero de brazos
		int brazos()
		{
			return nbrazos;
		}
		//Funci�n para mostrar el n�mero de cabezas
		int cabeza()
		{
			return ncabeza;
		}
		//Funciones Miembros Est�ticas:
		static string colordeojos;
		static string colordepelo;
		//Funciones Miembros(Flotantes):
		//Funci�n "altura" para mostrar la altura "a"
		float altura(float a)
		{
			return a;
		}
		//Funci�n "peso" para mostrar el peso "p"
		float peso(float p)
		{
			return p;
		}
		//Funciones Miembros (Cadena de Caracteres)
		string nombre()
		{
			return nnombre;
		}
		string apellido()
		{
			return napellido;
		}
};

//Definimos el constructor
Persona::Persona(string n,string a)
{
	npiernas=2;
	nbrazos=2;
	ncabeza=1;
	nnombre=n;
	napellido=a;
}

string Persona::colordeojos="negros";
string Persona::colordepelo="negro";

