#include<iostream>
using namespace std;

class vector
{
	float a,b;
	public:
		void ingresarA(int n)
		{
			cout<<"Ingresa A["<<n+1<<"]=";
			cin>>a;
		}
		void ingresarB(int n)
		{
			cout<<"Ingresa B["<<n+1<<"]=";
			cin>>b;
		}
		float mostrarA()
		{
			return a;
		}
		float mostrarB()
		{
			return b;
		}
};

int main()
{
	//creacion de objetos
	vector A[3];
	vector B[3];
	//fin creacion de objetos
	
	//introduccion de vectores
	for(int i=0;i<3;i++)
	{
		A[i].ingresarA(i);
	}
	for(int i=0;i<3;i++)
	{
		B[i].ingresarB(i);
	}
	//fin de introduccion de vectores
	
	//mostrarvectores
	cout<<"Vector A = [ ";
	for(int i=0;i<3;i++)
	{
		cout<<A[i].mostrarA()<<" ";
	}
	cout<<"]";
	cout<<endl;
	
	cout<<"Vector B = [ ";
	for(int i=0;i<3;i++)
	{
		cout<<B[i].mostrarB()<<" ";
	}
	cout<<"]";
	cout<<endl;
	//fin mostrar
	
	//producto vectorial
	float   x=(A[1].mostrarA()*B[2].mostrarB()-A[2].mostrarA()*B[1].mostrarB());
	float	y=(-A[0].mostrarA()*B[2].mostrarB()+A[2].mostrarA()*B[0].mostrarB());
	float	z=(A[0].mostrarA()*B[1].mostrarB()-A[1].mostrarA()*B[0].mostrarB());
	cout<<"El producto vectorial de AXB = ["<<x<<" "<<y<<" "<<z<<"]"<<endl;	
	return 0;
}
