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
//creacion de objetos
	vector A[3];
	vector B[3];
//fin creacion de objetos	

// funcion producto vectorial
void pVectorial()
		{
		float p[3];
		for(int j=0;j<3;j++)
		{
				p[j]=(A[(j+1)%3].mostrarA()*B[(j+2)%3].mostrarB()-A[(j+2)%3].mostrarA()*B[(j+1)%3].mostrarB());		
		}
			cout<<"El producto vectorial de AXB = ["<<p[0]<<" "<<p[1]<<" "<<p[2]<<"]"<<endl;	
		}

int main()
{
	system("color 0A");
	
	//introduccion de vectores
	for(int i=0;i<3;i++)
	{
		A[i].ingresarA(i);
	}
	cout<<endl<<endl;
	for(int i=0;i<3;i++)
	{
		B[i].ingresarB(i);
	}
	//fin de introduccion de vectores
	system("cls");
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
	cout<<endl<<endl;
	//fin mostrar	
	
	pVectorial();//producto vectorial
	
	return 0;
}
