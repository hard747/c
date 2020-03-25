//                                                 ordena 5 numeros
//  hard717

#include<iostream>
int x;
int y;

 void ordenar (int &x,int &y)
{
	if(x<y)
	{
	int tmp=x;
	x=y;
	y=tmp;
	}
}	
 using namespace std;

 int main()

{
	int a,b,c,d,e;

	cin>>a>>b>>c>>d>>e;
	
	ordenar(a,b);
	ordenar(a,c);
	ordenar(a,d);
	ordenar(a,e);
	ordenar(b,c);
	ordenar(b,d);
	ordenar(b,e);
	ordenar(c,d);
	ordenar(c,e);
	ordenar(d,e);
	
	cout<<a<<b<<c<<d<<e<<endl;
	
	cin.get();
	return 0;
}
