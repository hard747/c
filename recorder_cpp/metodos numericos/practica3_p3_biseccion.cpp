#include <iostream>
#include <math.h>
using namespace std;
double f(double x)
{
	double y=(8*pow(x,3))+32*(x*x)-80;
	return y;
}
	double li,lf,emin,ea;
	int imax,actual,ia;
	double x=0,xa,aux;
	
int main()
{
	cout<<"metodo de biseccion"<<endl;
	cout<<"introduzca el minimo"<<endl;cin>>li;
	cout<<"introduzca el maximo"<<endl;cin>>lf;
	cout<<"introduzca la cantidad maxima de iteraciones"<<endl;cin>>imax;
	cout<<"introduzca el error minimo de calculo: "<<endl;cin>>emin;
	
	if(f(li)*f(lf)<0)
	{
		cout<<"iteracion actual"<<"\t\t"<<"raiz"<<"\t\t "<<"error aproximado"<<endl;
		do{
			ia++;
			xa=x;
			x=(li+lf)/2;
			ea=fabs((x-xa)/(x));//*100;
			aux=f(li)*f(x);
			if(aux<0){
				lf=x;
			}
			else if(aux>0){
				li=x;
			}
			else{
				ea=0;
			}
			cout<<"\t"<<ia<<"\t\t\t "<<x<<"\t\t\t"<<ea<<endl;
		}while((ia<=imax) && (ea>=emin));
	}
	else{
		cout<<"no hay raicez en este intervalo"<<endl;
	}
	return 0;
}

