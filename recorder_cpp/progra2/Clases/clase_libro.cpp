//Si se desea implementar en C++, usando POO, un Libro de Calificaciones para ello se tiene que establecer el nombre del curso y duraci�n de dicho curso (en horas), 
//tenga en cuenta que dicha informaci�n se solicitara en pantalla. Adem�s realice su respectivo diagrama de clases.

#include <iostream>
using namespace std;
//Definimos la clase LIBRO
class Libro
{
	public:
	//Definimos la funci�n MostrarNombre del Curso
	void MostrarNombre(string a)
	{
		cout<<"El nombre del curso ingresado es: "<<a<<endl;
		
	}
	//Definimos la funci�n MostrarHorario del Curso
	void MostrarHorario(string a,int b)
	{
		cout<<"La duracion del curso de "<<a<<" es: "<<b<<" hrs "<<endl; 
		
	}
};
//Funci�n Principal
int main()
{
	string m;//cadena de caracteres
	int n;//valor entero
	//Creamos el objeto asociado a la clase LIBRO
	Libro objeto;
	//Solicitamos en pantalla la informaci�n del curso
	cout<<"Ingrese el curso: ";
	cin>>m;
	cout<<"Ingrese la duracion de dicho curso en horas : ";
    cin>>n;
    cout<<" "<<endl;
    //Asociamos el objeto a cada funci�n definida
    //en la clase
    objeto.MostrarNombre(m);
    objeto.MostrarHorario(m,n);
    cout<<" "<<endl;
    system("PAUSE");
    return 0;
}
