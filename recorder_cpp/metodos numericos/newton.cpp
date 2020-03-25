#include <iostream>
#include <math.h>
using namespace std;
double f(double x)
{
	double y=/*pow(x,2)+sin(x)-5;*/exp(-pow(x,2))-((pow(x,2)-7*x+7)/(10*pow(x-1,2)));
	return y;
}
double d(double x)
{
	double k=/*2*x+cos(x);*/-2*exp(-pow(x,2))-((5*x-7)/(10*pow(x-1,3)));
	return k;
}

	double li,lf,ea;
	int ia=0;
	double xo,x,aux,emin;
	
int main()
{
	cout<<"metodo de newton-raphson"<<endl<<endl;
	cout<<"introduzca el minimo"<<endl;cin>>li;
	cout<<"introduzca el maximo"<<endl;cin>>lf;
	//cout<<"introduzca la cantidad maxima de iteraciones"<<endl;cin>>imax;
	cout<<"introduzca el numero de partida: "<<endl;cin>>xo;
	cout<<"introduzca el error minimo"<<endl;cin>>emin;
	x=xo;
	if(f(li)*f(lf)<0)
	{
		cout<<"iteracion actual"<<"\t |"<<"\t raiz"<<"\t |"<<"\t error aproximado"<<endl;
		do{
			ia++;
			xo=x;
			x=xo-(f(xo))/(d(xo));
			ea=fabs(x-xo);
			cout<<"\t"<<ia<<"\t |"<<"\t "<<x<<"\t |"<<"\t "<<ea<<endl;
		}while((ia<=50) && (ea>=emin));
	}
	else{
		cout<<"no hay raizes en este intervalo"<<endl;
	}
	return 0;
}

