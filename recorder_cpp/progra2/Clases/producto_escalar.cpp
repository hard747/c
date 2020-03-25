#include<iostream>
using namespace std;
//clase Vector
class Vector
{
	int a;//variable entera "a"
	int b;
	public:
		//Funciones Miembro
		//Función para ingresar los elementos del 
		// vector A
		void IngresarA(int n)
		{
			cout<<"Ingresa A["<<n<<"]=";
			cin>>a;
		}
		void IngresarB(int n)
		{
			cout<<"Ingresa B["<<n<<"]=";
			cin>>b;
		}
		//Función para mostrar los elementos del 
		//vector A
		int MostrarA()
		{
			return a;
		}
		int MostrarB()
		{
			return b;
		}
};

//función principal
int main()
{
	//Creamos un objeto de 
	// dimensión 3 y asociado a la clase Vector
	Vector vectorA[3];
	Vector vectorB[3];
	//Solicitamos en pantalla los elementos del vector A
	for(int i=1;i<=3;i++)
	{
		vectorA[i].IngresarA(i);
	}

	//Solicitamos en pantalla los elementos del vector B
	for(int i=1;i<=3;i++)
	{
		vectorB[i].IngresarB(i);
	}
	
	//Mostramos los elementos del vector
	cout<<"Vector A = [ ";
	for(int i=1;i<=3;i++)
	{
		cout<<vectorA[i].MostrarA()<<" ";
	}
	cout<<"]";
	cout<<"\n";
	//Mostramos los elementos del vector
	cout<<"Vector B = [ ";
	for(int i=1;i<=3;i++)
	{
		cout<<vectorB[i].MostrarB()<<" ";
	}
	cout<<"]";
	cout<<"\n";
	//Realizamos la operación A.B
	int s=0,p[3];
	for(int i=1;i<=3;i++)
	{
		p[i]=vectorA[i].MostrarA()*vectorB[i].MostrarB();
		s=s+p[i];
	}
	cout<<"El producto escalar de A.B= "<<s<<endl;
	
	system("pause");
	return 0;
}
