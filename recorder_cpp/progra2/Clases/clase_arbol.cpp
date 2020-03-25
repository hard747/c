//Ejercicio 1e: Se desea crear la clase �rbol indicando 
//la altura inicial y la altura final (en metros) despu�s 
//de haber transcurrido 4 a�os. Tenga en cuenta que el
// �rbol cada a�o crece un metro. Considere como valores
// constantes altura inicial=12 m. Adem�s implemente el
// constructor y el destructor respectivo.

#include <iostream>
using namespace std; //uso del cin y cout
//Declaramos la clase "Arbol"
class Arbol
{
	int Altura; //variable entera "Altura"
	public:
		//Declaro el constructor
		Arbol(int AlturaInicial);
		//Declaro el destructor (Alt+126=~)
		~Arbol();
		//Declaramos las Funciones Miembro de la 
		// clase Arbol
		
		//Funcion "Crecer" que depende de los a�os (anios)
		void Crecer(int anio);
		//Funcion "CrecerFin" que representer� la
		// altura final
		void MostrarAlturaFinal();
};
//Definimos las Funciones Miembros

//Definimos el Constructor "Arbol" asociado a la clase
// "Arbol" y que depende de la variable entera
// "AlturaInicial"
Arbol::Arbol(int AlturaInicial)
{
	Altura=AlturaInicial;
}
//Definimos el Destructor 
Arbol::~Arbol()
{
	cout<<"Antes que se aplique el destructor"<<endl;
	MostrarAlturaFinal();
}
//Definimos la funci�n "Crecer" asociada a la clase
// Arbol y que depende la variable entera "anio" (a�os)
void Arbol::Crecer(int anio)
{
	Altura=Altura+anio; //Altura+=anio;//
}
//Definimos la funci�n "CrecerFin" asociada a la clase
// Arbol
void Arbol::MostrarAlturaFinal()
{
	cout<<"La Altura del Arbol es = "<<Altura<<endl;
}

int main()
{
	//Creamos el objeto "Arbolito" asociado a la clase
	// Arbol  y cuyo valor 12 representa la altura inicial
	Arbol Arbolito(12);
	//Mostrar en pantalla la altura que se encuentre
	// en ese instante
	Arbolito.MostrarAlturaFinal();
	//Mostrar en pantalla la altura despues de transcurrido
	// 4 a�os
	Arbolito.Crecer(4);
}
