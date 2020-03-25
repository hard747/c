//Si se desea implementar en C++, usando POO, un Libro de Calificaciones para ello se tiene que establecer el nombre del curso y duración de dicho curso (en horas), 
//tenga en cuenta que dicha información se solicitara en pantalla. Además realice su respectivo diagrama de clases.

#include <iostream>
using namespace std;
//Definimos la clase LIBRO
class Libro
{
	public:
	//Definimos la función MostrarNombre del Curso
	void MostrarNombre(string a)
	{
		cout<<"El nombre del curso ingresado es: "<<a<<endl;
		
	}
	//Definimos la función MostrarHorario del Curso
	void MostrarHorario(string a,int b)
	{
		cout<<"La duracion del curso de "<<a<<" es: "<<b<<" hrs "<<endl; 
		
	}
};
//Función Principal
int main()
{
	string m;//cadena de caracteres
	int n;//valor entero
	//Creamos el objeto asociado a la clase LIBRO
	Libro objeto;
	//Solicitamos en pantalla la información del curso
	cout<<"Ingrese el curso: ";
	cin>>m;
	cout<<"Ingrese la duracion de dicho curso en horas : ";
    cin>>n;
    cout<<" "<<endl;
    //Asociamos el objeto a cada función definida
    //en la clase
    objeto.MostrarNombre(m);
    objeto.MostrarHorario(m,n);
    cout<<" "<<endl;
    system("PAUSE");
    return 0;
}
